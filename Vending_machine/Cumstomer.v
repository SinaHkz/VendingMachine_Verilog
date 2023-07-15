`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:47 06/28/2023 
// Design Name: 
// Module Name:    Cumstomer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Customer(
input clk,
input [3:0]price[0:7],
input [3:0]amount,

output [2:0]typeWanted,
output [3:0]money,
output [4:0]mahcineAcc,
output [3:0]supply[0:7],

output redLight
    );
	 
	 always @(posedge clk)
		begin
		if (money >= price[typeWanted] * amount && amount <= supply[typeWanted])
			begin
			money = money - (price[typeWanted]*amount);
			supply[typeWanted] = supply[typeWanted] - amount;
			machinAcc = machineAcc + (price[typeWanted]*amount);
			redLight = 1'b0;
			end
		else
			refLight = 1'b1;
		end
			
	 


endmodule
