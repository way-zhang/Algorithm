/*
第4题：判断质数（素数）
描述：输入一个正整数 n (n > 1)，判断它是否为质数。要求时间复杂度优化到 O(√n)。
输入：一个整数n。
输出：true 或 false。
示例：17 -> true ; 18 -> false
考察点：sqrt() 函数、取模运算、边界条件（处理2和3）。
*/

#include <cmath>
#include <iostream>

using namespace std;

void primeNumber(int n) {
  bool yes = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      yes = false;
      break;
    }
  }
  cout << yes << endl;
}
int main() { primeNumber(4); }