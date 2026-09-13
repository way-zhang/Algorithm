/*
第3题：整数反转（逐位构造）
描述：给定一个整数 x，将它的各位数字反转后输出（负数保留负号）；
若反转后的结果超出 32 位有符号整数范围，则输出 0。
输入：一个整数 x。
输出：反转后的整数，或 0。
示例：-123 -> -321
考察点：用 % 10 取末位、/ 10 去掉末位逐位构造反转数；
注意负数取余的符号特性以及溢出判断。
*/
#include <climits>
#include <iostream>
using namespace std;

int reverseInteger(int x) {
  long long res = 0;
  while (x != 0) {
    res = res * 10 + x % 10;
    x /= 10;
    if (res > INT_MAX || res < INT_MIN) {
      return 0;
    }
  }
  return (int)res;
}

int main() {
  cout << reverseInteger(-123) << endl;
  cout << reverseInteger(1534236469) << endl;
}
