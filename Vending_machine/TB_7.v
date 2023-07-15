`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:33:24 06/30/2023
// Design Name:   display
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_7.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_7;

	// Inputs
	reg clk;
	reg [8:0] data;

	// Outputs
	wire [6:0] first7S;
	wire [6:0] second7S;

	// Instantiate the Unit Under Test (UUT)
	display uut (
		.clk(clk), 
		.data(data), 
		.first7S(first7S), 
		.second7S(second7S)
	);
	
	always #20 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		data = 14;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

