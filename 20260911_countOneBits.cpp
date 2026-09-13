/*
第24题：二进制中 1 的个数（位运算）
描述：给定一个非负整数 n，统计其二进制表示中 1 的个数（又称汉明重量）。
输入：一个非负整数 n。
输出：二进制中 1 的个数。
示例：11 -> 3
考察点：位运算技巧 n & (n - 1) 可以消去最低位的 1，循环次数正好等于 1 的个数；
对比"不断右移并判断最低位"的朴素做法。
*/
#include <iostream>
using namespace std;

int countOneBits(int n) {
  int count = 0;
  while (n >= 1) {
    if (n % 2 == 1) {
      count++;
    }
    n = n >> 1;
  }
  return count;
}
int main() {
  int res = countOneBits(11);
  cout << res << endl;
}