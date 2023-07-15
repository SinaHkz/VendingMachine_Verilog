`timescale 1ns / 1ps
module display2(
input clk,
input data,
output reg [6:0]out
    );
	 initial begin out <= 7'b1111110; 
	 end
	
	always@(posedge clk)begin
	#3
		if (data == 1'b1)
			out <= 7'b0000110;
		else 
			out <= 7'b1111110;
	end
endmodule
