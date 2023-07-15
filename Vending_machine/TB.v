`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:25:54 06/28/2023
// Design Name:   Customer
// Module Name:   C:/Users/Sina HZ/Vending_machine/TB.v
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

module TB;

	// Inputs
	reg clk;
	reg [3:0] price;
	reg [3:0] amount;
	reg [3:0] money;
	reg [4:0] mahcineAcc;
	reg [3:0] supply;

	// Outputs
	wire redLight;
	wire [4:0] machineAcc_out;
	wire [3:0] money_out;
	wire [3:0] supply_out;

	// Instantiate the Unit Under Test (UUT)
	Customer uut (
		.clk(clk), 
		.price(price), 
		.amount(amount), 
		.money(money), 
		.mahcineAcc(mahcineAcc), 
		.supply(supply), 
		.redLight(redLight), 
		.machineAcc_out(machineAcc_out), 
		.money_out(money_out), 
		.supply_out(supply_out)
	);
	
	always #20 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		price = 3;
		amount = 2;
		money = 6;
		mahcineAcc = 0;
		supply = 4;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

