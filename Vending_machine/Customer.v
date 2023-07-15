`timescale 1ns / 1ps

module Customer(
input [1:0]mode,
input clk,
input [3:0]price, //from array
input [3:0]amount, //from customer
input [6:0]money,//from customer
input [8:0]mahcineAcc,//from array
input  [3:0]supply,//from array

output reg redLight,
output reg [8:0]machineAcc_out,
output reg [3:0]supply_out, //supply left for array
output reg [6:0]remaining_money
    );
	initial redLight = 0;
	wire [10:0]Wire = (price * amount);
	initial  machineAcc_out = 9'd0; 
	initial remaining_money = 7'd0;

	
	
	
	 
	 
	 always @(posedge clk)
		begin
			//$display("-------------------> %d %d %t",machineAcc_out,mahcineAcc,$time);
			if (mode == 2'b01)
			begin
				if (money >= (Wire) && (amount <= supply))
					begin
					supply_out <= supply - amount;
					machineAcc_out <= (mahcineAcc + (Wire));
					remaining_money <= money - (amount * price);
					redLight <= 1'b0;
					//$display("1 %t",$time);
					end
				else begin
					supply_out <= supply;
					machineAcc_out <= mahcineAcc;
					remaining_money <= money;
					redLight <= 1'b1;
					//$display("2  %t",$time);
				end
			end
			else begin
				supply_out <= supply;
				remaining_money <= money;
				machineAcc_out <= mahcineAcc;
				//$display("3");
			end
			//$display("-------------------> %d %d",machineAcc_out,mahcineAcc);

			
		end
			
	 


endmodule