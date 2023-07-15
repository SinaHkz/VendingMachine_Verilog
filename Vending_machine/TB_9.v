`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:54:25 06/30/2023
// Design Name:   Main
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_9.v
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

module TB_9;

	// Inputs
	reg [1:0] mode;
	reg clk;
	reg [6:0] customer_money;
	reg [2:0] supply_type;
	reg [3:0] customer_amount;
	reg [3:0] amount_sypply_to_add;

	// Outputs
	wire [6:0] error;
	wire redLight;

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
	
	always #20 clk = ~clk;

	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		customer_money = 20;
		supply_type = 0;
		customer_amount = 2;
		amount_sypply_to_add = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		customer_money = 10;
		supply_type = 1;
		customer_amount = 1;
		
		#100
		
		customer_money = 1;
		supply_type = 5;
		customer_amount = 4;
		
		#100
		
		customer_money = 15;
		supply_type = 6;
		customer_amount = 3;
        
		// Add stimulus here

	end
      
endmodule

