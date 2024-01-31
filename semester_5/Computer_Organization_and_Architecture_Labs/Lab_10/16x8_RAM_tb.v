module tb_ram_16x8;
  reg clk;
  reg [3:0] addr;
  reg [7:0] data_in;
  reg write_enable;

  wire [7:0] data_out;
 
  ram_16x8 uut (
    .clk(clk),
    .addr(addr),
    .data_in(data_in),
    .write_enable(write_enable),
    .data_out(data_out)
  );

  always begin
    #5 clk = ~clk;
  end

  initial begin
    clk = 0;
    addr = 4'b0000;
    data_in = 8'b0000_0000;
    write_enable = 0;

    addr = 4'b0001;
    data_in = 8'b1010_1010;
    write_enable = 1;
    #10 write_enable = 0;

    addr = 4'b0001;
    write_enable = 0;
    $monitor("Time=%t, clk=%b, addr=%b, data_in=%b, write_enable=%b, data_out=%b", $time, clk, addr, data_in, write_enable, data_out);
    #100 $finish;
  end
endmodule
