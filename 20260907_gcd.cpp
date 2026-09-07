/*
第5题：求最大公约数 (GCD)
描述：输入两个正整数 a 和
b，使用辗转相除法（欧几里得算法）计算它们的最大公约数。
输入：一行两个整数，空格隔开。
输出：GCD值。
示例：48 18 -> 6
考察点：递归或迭代循环、取余运算（%）。
*/

#include <iostream>
using namespace std;
int gcd_rec(int a, int b) {
  if (b == 0)
    return a;
  return gcd_rec(b, a % b);
}

int main() {
  int a, b;
  a = 20;
  b = 48;
  cout << gcd_rec(a, b) << endl;
  return 0;
}