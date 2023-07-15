`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:38:27 06/28/2023
// Design Name:   Main
// Module Name:   C:/Users/Sina HZ/Vending_machine/MTB_1.v
// Project Name:  Vending_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MTB_1;

	// Inputs
	reg [1:0] mode;
	reg clk;
	reg [6:0] customer_money;
	reg [2:0] supply_type;
	reg [3:0] customer_amount;
	reg [3:0] amount_sypply_to_add;

	// Outputs
	wire error;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.mode(mode), 
		.clk(clk), 
		.customer_money(customer_money), 
		.supply_type(supply_type), 
		.customer_amount(customer_amount), 
		.amount_sypply_to_add(amount_sypply_to_add), 
		.error(error)
	);
	
	always #100 clk = ~clk;

	
	initial begin
		#10
	// Initialize Inputs
		mode = 0;
		clk = 0;
		customer_money = 20;
		supply_type = 3;
		customer_amount = 2;
		amount_sypply_to_add = 0;

		// Wait 100 ns for global reset to finish
		#100;
			mode = 1;

		// Add stimulus here

	end
      
endmodule

