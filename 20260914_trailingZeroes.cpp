/*
第5题：阶乘后的零（数学推导）
描述：给定整数 n，返回 n! 的十进制表示中末尾 0 的个数。
输入：一个整数 n。
输出：末尾 0 的个数。
示例：25 -> 6
考察点：末尾的 0 由因子 10 = 2 × 5 产生，而 2 的个数远多于 5，
因此只需统计阶乘中因子 5 的个数：n/5 + n/25 + n/125 + …（整数除法）。
*/
#include <iostream>
using namespace std;

int trailingZeroes(int n) {
  int count = 0;
  while (n > 0) {
    n /= 5;
    count += n;
  }
  return count;
}

int main() { cout << trailingZeroes(25) << endl; }
