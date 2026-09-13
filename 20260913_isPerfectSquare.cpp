/*
第7题：有效的完全平方数（枚举/二分）
描述：给定一个正整数 num，判断它是否为完全平方数（即存在整数 x 使 x * x == num）。
要求不使用内置的求平方根函数。
输入：一个正整数 num。
输出：true 或 false。
示例：16 -> true ；另一个：14 -> false
考察点：从小到大枚举 i 直到 i * i > num 的朴素做法，或在 1~num 范围内二分逼近平方根；
注意乘法可能溢出。
*/
#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
  long long i = 1;
  while (i * i <= num) {
    if (i * i == num) {
      return true;
    }
    i++;
  }
  return false;
}

int main() {
  cout << (isPerfectSquare(16) ? "true" : "false") << endl;
  cout << (isPerfectSquare(14) ? "true" : "false") << endl;
}
