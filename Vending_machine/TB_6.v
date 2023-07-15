`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:31:19 06/29/2023
// Design Name:   Customer
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB_6.v
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

module TB_6;

	// Inputs
	reg [1:0] mode;
	reg clk;
	reg [3:0] price;
	reg [3:0] amount;
	reg [6:0] money;
	reg [8:0] mahcineAcc;
	reg [3:0] supply;

	// Outputs
	wire redLight;
	wire [4:0] machineAcc_out;
	wire [3:0] supply_out;

	// Instantiate the Unit Under Test (UUT)
	Customer uut (
		.mode(mode), 
		.clk(clk), 
		.price(price), 
		.amount(amount), 
		.money(money), 
		.mahcineAcc(mahcineAcc), 
		.supply(supply), 
		.redLight(redLight), 
		.machineAcc_out(machineAcc_out), 
		.supply_out(supply_out)
	);
	
	always #20 clk = ~clk;

	initial begin
		// Initialize Inputs
		mode = 1;
		clk = 0;
		price = 2;
		amount = 2;
		money = 20;
		mahcineAcc = 0;
		supply = 11;

		// Wait 100 ns for global reset to finish
		#100;
		
		mode = 1;
		
		
		
        
		// Add stimulus here

	end
      
endmodule

