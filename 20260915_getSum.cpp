/*
第6题：两整数之和（位运算模拟加法）
描述：给定两个整数 a 和 b，要求不使用加号 + 和减号 -，计算并输出它们的和。
输入：两个整数 a 和 b（空格隔开）。
输出：a + b 的值。
示例：1 2 -> 3 ；另一个：-2 3 -> 1
考察点：位运算模拟竖式加法——不进位部分为 a ^ b，进位部分为 (a & b) << 1，
把两者当作新的 a、b 反复计算直到进位为 0；理解补码下负数也能同样处理。
*/
#include <iostream>
using namespace std;

int getSum(int a, int b) {
  while (b != 0) {
    unsigned int carry = (unsigned int)(a & b) << 1;
    a = a ^ b;
    b = (int)carry;
  }
  return a;
}

int main() {
  cout << getSum(1, 2) << endl;
  cout << getSum(-2, 3) << endl;
}
