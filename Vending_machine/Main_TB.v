`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:47:05 06/30/2023
// Design Name:   Main
// Module Name:   C:/Users/Sina HZ/Vending_machine/Main_TB.v
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

module Main_TB;

	// Inputs
	reg [1:0] mode;
	reg clk;
	reg [6:0] customer_money;
	reg [2:0] supply_type;
	reg [3:0] customer_amount;
	reg [3:0] amount_sypply_to_add;

	// Outputs
	wire [6:0] error;
	wire [6:0] First7;
	wire [6:0] Second7;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.mode(mode), 
		.clk(clk), 
		.customer_money(customer_money), 
		.supply_type(supply_type), 
		.customer_amount(customer_amount), 
		.amount_sypply_to_add(amount_sypply_to_add), 
		.error(error), 
		.First7(First7), 
		.Second7(Second7)
	);
	
	always #25 clk = ~clk;

	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		customer_money = 20;
		supply_type = 0;
		customer_amount = 1;
		amount_sypply_to_add = 0;

		// Wait 100 ns for global reset to finish
		#50;
		
		
		customer_money = 10;
		supply_type = 3;
		customer_amount = 1;
		
		#50
		
		customer_money = 0;
		supply_type = 7;
		customer_amount = 3;
		
		#50
		
		customer_money = 19;
		supply_type = 7;
		customer_amount = 1;
		
		#50
		
		mode = 2;
		supply_type = 0;
		amount_sypply_to_add = 2;
		
		#50
		
		$finish;
        
		// Add stimulus here

	end
      
endmodule

