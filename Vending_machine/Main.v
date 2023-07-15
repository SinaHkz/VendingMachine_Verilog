`timescale 1ns / 1ps
module Main(
input [1:0] mode,
input clk,
//mode 1 inputs: 
input [6:0]customer_money, //7 bit for 225 state.
input [2:0]supply_type,  //for mode 1 and 2.
input [3:0]customer_amount,
//mode 2 inputs:
input [3:0]amount_sypply_to_add,
//mode 3 inputs: -

output [6:0]error,
output [6:0]First7_machine,
output [6:0]Second7_machine,
output [6:0]First7_customer,
output [6:0]Second7_customer

    );
	 
	 reg [10:0] mem_array [7:0];
	 reg [3:0]supply[7:0];
	 reg [3:0]prices[7:0];
	 reg [8:0]machineAcc;
	 reg [6:0]history;
	 
	 initial begin
		mem_array[0] = 4'b0000;
		mem_array[1] = 4'b0000;
		mem_array[2] = 4'b0000;
		mem_array[3] = 4'b0000;
		mem_array[4] = 4'b0000;
		mem_array[5] = 4'b0000;
		mem_array[6] = 4'b0000;
		mem_array[7] = 4'b0000;
		
		machineAcc = 9'b00000;
		history = 7'b0000000;		
	 end

	 wire redLight1;
	 wire redLight2;
	 wire redLight3;
	 wire redLight;
	 //mode 1 wires:
	 wire [8:0]machineAcc_out;
	 wire [3:0]supply_outC;
	 wire [6:0]remaining_money;
	 //mode 2 wires:
	 wire [3:0]supply_outO;
	 //mode 3 wire:
	 wire [8:0]totalMoneyRetrieve_out;
	 
	 

	 initial begin
		//error <= 0;
		$readmemb("stuff.txt" , mem_array);
		supply[0] = mem_array[0][7:4];
		prices[0] = mem_array[0][3:0];
		
		supply[1] = mem_array[1][7:4];
		prices[1] = mem_array[1][3:0];
		
		supply[2] = mem_array[2][7:4];
		prices[2] = mem_array[2][3:0];
		
		supply[3] = mem_array[3][7:4];
		prices[3] = mem_array[3][3:0];
		
		supply[4] = mem_array[4][7:4];
		prices[4] = mem_array[4][3:0];
		
		supply[5] = mem_array[5][7:4];
		prices[5] = mem_array[5][3:0];
		
		supply[6] = mem_array[6][7:4];
		prices[6] = mem_array[6][3:0];
		
		supply[7] = mem_array[7][7:4];
		prices[7] = mem_array[7][3:0];
		
		
	 end
	 
	
	 always@(posedge clk) begin //always block for updating the array values
		#2
		if (mode == 2'b01)begin
			supply[supply_type] <= supply_outC;
			machineAcc <= machineAcc_out;
		end
		else if (mode == 2'b10)
			supply[supply_type] <= supply_outO;
		else if (mode == 2'b11)begin
			machineAcc = 5'b00000;
			history <= totalMoneyRetrieve_out;
		end
		else if (mode == 2'b00)
			machineAcc = machineAcc;
	end
	

	always @(posedge clk)begin
			$display("-------------------------------------------------------------------");
			$display("type 0 has %d supply and %d is the price",supply[0],prices[0]);
			$display("type 1 has %d supply and %d is the price",supply[1],prices[1]);
			$display("type 2 has %d supply and %d is the price",supply[2],prices[2]);
			$display("type 3 has %d supply and %d is the price",supply[3],prices[3]);
			$display("type 4 has %d supply and %d is the price",supply[4],prices[4]);
			$display("type 5 has %d supply and %d is the price",supply[5],prices[5]);
			$display("type 6 has %d supply and %d is the price",supply[6],prices[6]);
			$display("type 7 has %d supply and %d is the price",supply[7],prices[7]);
			$display("machine money is %d" , machineAcc);
			$display("-------------------------------------------------------------------");
		end
	 
	 Customer CUSTOMER (
    .mode(mode), 
    .clk(clk), 
    .price(prices[supply_type]), 
    .amount(customer_amount), 
    .money(customer_money), 
    .mahcineAcc(machineAcc), 
    .supply(supply[supply_type]), 
    .redLight(redLight1), 
    .machineAcc_out(machineAcc_out), 
    .supply_out(supply_outC),
	 .remaining_money(remaining_money)
    );
	 
	 Owner_charge OWNER1 (
    .mode(mode), 
    .clk(clk), 
    .amount(amount_sypply_to_add), 
    .supply(supply[supply_type]), 
    .redLight(redLight2), 
    .supply_out(supply_outO)
    );
	 
	 Owner_retrieve OWNER2 (
    .mode(mode), 
    .clk(clk), 
    .machineAcc(machineAcc), 
    .totalMoneyRetrieve(history), 
    .redLight(redLight3), 
    .totalMoneyRetrieve_out(totalMoneyRetrieve_out)
		);
		
		
	display FirstDisplay (
    .clk(clk), 
    .data(machineAcc), 
    .first7S(First7_machine), 
    .second7S(Second7_machine)
    );
	 
	 display SecondDisplay (
    .clk(clk), 
    .data(remaining_money), 
    .first7S(First7_customer), 
    .second7S(Second7_customer)
    );
	 

	assign redLight = redLight1 | redLight2 | redLight3;
	
	 display2 REDLIGHT (
    .clk(clk), 
    .data(redLight),  
    .out(error)
    );
endmodule
