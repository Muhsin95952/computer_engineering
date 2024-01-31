module test_T_Controlled_Async_Counter_4_bit();
reg clk;      
reg rst;      
reg enable;   
wire [3:0] count; 

T_Controlled_Async_Counter_4_bit uut (.clock(clk), .reset(rst),.enable(enable),.count(count));

always begin
    #5 clk = ~clk;
end

initial begin
    clk = 0;
    rst = 0;
    enable = 1;

    rst = 1;
    #10 rst = 0;
    #20;
    $display("Time = 0, Count = %b", count);
    #10;
    $display("Time = 10, Count = %b", count);
    #10;
    $display("Time = 20, Count = %b", count);
    #10;
    $display("Time = 30, Count = %b", count);
    
    $finish;
end

endmodule