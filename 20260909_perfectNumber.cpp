/*
第9题：完数（完全数）
描述：完数指一个数恰好等于它的所有真因子（除自身外的正因子）之和的数，
例如 6 = 1 + 2 + 3。给定 n，输出 1 到 n 之间的所有完数。
输入：一个正整数 n。
输出：1 到 n 之间的所有完数（空格隔开）。
示例：1000 -> 6 28 496
考察点：因子枚举范围优化（只需枚举到 i/2）、求和后与自身比较。
*/
#include <iostream>
using namespace std;

void perfectNumber(int n) {
  for (int i = 1; i <= n; i++) {
    int sum = 0;
    for (int j = 1; j <= i / 2; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i) {
      cout << i << ' ';
    }
  }
  cout << endl;
}

int main() { perfectNumber(1000); }
