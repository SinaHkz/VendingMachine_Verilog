`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:19:26 06/28/2023
// Design Name:   Owner_retrieve
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_5.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Owner_retrieve
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_5;

	// Inputs
	reg mode;
	reg clk;
	reg [4:0] machineAcc;

	// Outputs
	wire redLight;
	wire [6:0] totalMoney_retrieve;
	wire machineAcc_out;

	// Instantiate the Unit Under Test (UUT)
	Owner_retrieve uut (
		.mode(mode), 
		.clk(clk), 
		.machineAcc(machineAcc), 
		.redLight(redLight), 
		.totalMoney_retrieve(totalMoney_retrieve), 
		.machineAcc_out(machineAcc_out)
	);
	always #20 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		machineAcc = 6;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

