/*
第5题：自除数（逐位数位判断）
描述：自除数是指可以被它每一位上的数字整除的数（0 不能作除数，因此含有 0 的数一定不是）。
给定区间 [left, right]，输出该区间内所有的自除数。
输入：两个正整数 left 和 right（left <= right，空格隔开）。
输出：区间内所有自除数（空格隔开）。
示例：1 22 -> 1 2 3 4 5 6 7 8 9 11 12 15 22
考察点：逐位取数字（% 10 与 / 10）、遇到数字 0 立即判定不成立、
对每个数验证所有位都能整除它本身。
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
  vector<int> res;
  for (int n = left; n <= right; n++) {
    int x = n;
    bool ok = true;
    while (x > 0) {
      int d = x % 10;
      if (d == 0 || n % d != 0) {
        ok = false;
        break;
      }
      x /= 10;
    }
    if (ok) {
      res.push_back(n);
    }
  }
  return res;
}

int main() {
  vector<int> res = selfDividingNumbers(1, 22);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}
