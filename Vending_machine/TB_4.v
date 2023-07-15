`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:23:15 06/28/2023
// Design Name:   Owner_retrieve
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_4.v
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

module TB_4;

	// Inputs
	reg mode;
	reg clk;
	reg [4:0] machineAcc;
	reg totalMoneyRetrieve;

	// Outputs
	wire redLight;
	wire [6:0] totalMoneyRetrieve_out;
	wire machineAcc_out;

	// Instantiate the Unit Under Test (UUT)
	Owner_retrieve uut (
		.mode(mode), 
		.clk(clk), 
		.machineAcc(machineAcc), 
		.totalMoneyRetrieve(totalMoneyRetrieve), 
		.redLight(redLight), 
		.totalMoneyRetrieve_out(totalMoneyRetrieve_out), 
		.machineAcc_out(machineAcc_out)
	);
	
	always #20 clk = ~clk;

	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		machineAcc = 6;
		totalMoneyRetrieve = 5;

		// Wait 100 ns for global reset to finish
		#100;
		
		mode = 0;
        
		// Add stimulus here

	end
      
endmodule

