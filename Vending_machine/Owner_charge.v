`timescale 1ns / 1ps
module Owner_charge(
input [1:0]mode,
input clk,
input [3:0]amount, //from owner
input [3:0]supply, //from array
output reg redLight,
output reg [3:0]supply_out //to array
    );
	 
	 	initial redLight = 0;
		wire [7:0]Wire = amount + supply;

	 always@(posedge clk)
	 begin
	 if (mode == 2'b10)
	 begin
		 if ((Wire) > 4'b1111) begin
			supply_out <= supply;
			redLight <= 1'b1;
		end
		 else 
			begin
			supply_out <= Wire;
			redLight <= 1'b0;
			end
		end
		else 
			supply_out <= supply;
	 end
	 


endmodule
