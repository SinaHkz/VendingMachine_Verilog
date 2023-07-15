`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:46:06 06/28/2023
// Design Name:   Customer
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB-1.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Customer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB-1;

	// Inputs
	reg clk;
	reg [3:0] price;

	// Instantiate the Unit Under Test (UUT)
	Customer uut (
		.clk(clk), 
		.price(price)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		price = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

