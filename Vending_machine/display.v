`timescale 1ns / 1ps
module display(
input clk,
input [6:0]data,
output reg [6:0]first7S,
output reg [6:0]second7S
    );
	 parameter s0 = 7'b1111110;
	 parameter s1 = 7'b0000110;
	 parameter s2 = 7'b1101101;
	 parameter s3 = 7'b1111001;
	 parameter s4 = 7'b0110011;
	 parameter s5 = 7'b1011011;
	 parameter s6 = 7'b1011111;
	 parameter s7 = 7'b1110000;
	 parameter s8 = 7'b1111111;
	 parameter s9 = 7'b1111011;



	
	
	always@(posedge clk)begin
		#3
		case(data % (4'd10))
			4'b0000 : first7S = s0;
			4'b0001 : first7S = s1;
			4'b0010 : first7S = s2;
			4'b0011 : first7S = s3;
			4'b0100 : first7S = s4;
			4'b0101 : first7S = s5;
			4'b0110 : first7S = s6;
			4'b0111 : first7S = s7;
			4'b1000 : first7S = s8;
			4'b1001 : first7S = s9;
		endcase
		if (data > 4'd9)
			second7S = s1;
		else 
			second7S = s0;

	end


	


endmodule
