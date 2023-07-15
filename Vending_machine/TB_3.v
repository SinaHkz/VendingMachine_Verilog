`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:51:51 06/28/2023
// Design Name:   Owner_charge
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_3.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Owner_charge
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_3;

	// Inputs
	reg clk;
	reg [3:0] amount;
	reg [3:0] supply;

	// Outputs
	wire redLight;
	wire [3:0] supply_out;

	// Instantiate the Unit Under Test (UUT)
	Owner_charge uut (
		.clk(clk), 
		.amount(amount), 
		.supply(supply), 
		.redLight(redLight), 
		.supply_out(supply_out)
	);
	
	always #20 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		amount = 5;
		supply = 7;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

