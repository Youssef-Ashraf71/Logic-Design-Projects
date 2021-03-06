
/*
  Element Usage Report
    Input - 2 times
    AndGate - 1 times
    DigitalLed - 2 times
    XorGate - 1 times
*/

/*
module TestBench();

  reg A, B;


  Main DUT0(A, B);

  initial begin
    A = 0;
    B = 0;

    #15

    #10

    $finish;

  end
endmodule

*/

module Main(A, B);
  input A, B;
  wire and_0_out, xor_0_out;
  assign and_0_out = A & B;

      always @ (*)
        $display("DigitalLed:Carry=%d", and_0_out);
  assign xor_0_out = A ^ B;

      always @ (*)
        $display("DigitalLed:SUM=%d", xor_0_out);
endmodule
