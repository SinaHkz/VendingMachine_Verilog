`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:52:50 06/30/2023
// Design Name:   display2
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_8.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_8;

	// Inputs
	reg clk;
	reg [8:0] data;

	// Outputs
	wire [6:0] out;

	// Instantiate the Unit Under Test (UUT)
	display2 uut (
		.clk(clk), 
		.data(data), 
		.out(out)
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

