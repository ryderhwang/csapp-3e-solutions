
A:
bias = 2^(k-1) - 1 =
v = 2^E + M

7.0 = 111.000 = 1.11000x2^2

E = 2 = e - bias ==>  e = E + bias = 2 + bias = 1 + 2^(k-1) ==> 0 1000...001 1100...


B:
能够描述的最大的奇整数的位应该是111111......
而浮点数表示为1.111111...*2^n的样式，小数点后边应该有n个1 得到这些，我们就能计算出该浮点数的二进制表示
因此最大的奇整数位11111... 有n+1个1 也就是2^(n+1) - 1
E = n  ==> e = E + bias = n + bias
==> 0 n + bias 11111...

C:
要想得到最小的规格数，M必须是1.00...的样式 E = 1 - bias
V = 2^(1-bias) 取倒数 ==> V = 2^(bias-1) ==> E = bias - 1
e = bias + E ==> e = 2bias -1 = 2(2^(k-1) - 1) - 1 = 2^k -3
==> 0 1111...101 000000