`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:10:29 06/30/2023
// Design Name:   Main
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_11.v
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

module TB_11;

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
		.error(error), 
		.redLight(redLight)
	);
	alw

	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		customer_money = 0;
		supply_type = 0;
		customer_amount = 1;
		amount_sypply_to_add = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

