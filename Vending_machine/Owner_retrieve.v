`timescale 1ns / 1ps
module Owner_retrieve(
input [1:0]mode,
input clk,
input [4:0]machineAcc,
input [6:0]totalMoneyRetrieve,
output reg redLight,
output reg [6:0]totalMoneyRetrieve_out //a history  of how much money have retrieved.
    );
	 
	 initial redLight = 0;
		
	 
	 always @(posedge clk)
		begin
		if (mode == 2'b11)
			begin
			totalMoneyRetrieve_out <= totalMoneyRetrieve + machineAcc;
			if (machineAcc == 1'b0)
				redLight <= 1;
			else
				redLight <= 0;
			end
		else 
			totalMoneyRetrieve_out <= totalMoneyRetrieve;
		
		end


endmodule
