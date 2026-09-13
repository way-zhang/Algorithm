/*
第27题：计数质数（埃氏筛）
描述：给定一个整数 n，统计所有小于 n 的质数的个数。
输入：一个整数 n。
输出：小于 n 的质数个数。
示例：10 -> 4
考察点：埃拉托斯特尼筛法（用布尔数组标记合数、从 i*i 开始划去 i 的倍数）、
边界情况 n <= 2 时结果为 0。
*/
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
  if (n <= 2)
    return 0;
  vector<bool> isPrime(n, true);
  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i * i < n; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j < n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  int count = 0;
  for (int i = 2; i < n; ++i) {
    if (isPrime[i])
      ++count;
  }
  return count;
}
int main() {
  int res = countPrimes(10);
  cout << res << endl;
}