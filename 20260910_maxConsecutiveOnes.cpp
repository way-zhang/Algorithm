/*
第14题：最大连续 1 的个数（计数器）
描述：给定一个由 0 和 1 组成的数组，计算其中连续 1 的最大个数。
输入：第一行 n，第二行 n 个 0 或 1。
输出：最大连续 1 的个数。
示例：7 / 1 1 0 1 1 1 1 -> 4
考察点：当前计数 cur 与历史最大 max 的更新时机、遇到 0 时把 cur 清零。
*/
#include <iostream>

using namespace std;

int maxConsecutiveOnes(string str) {
  int cur = 0, maxN = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '1') {
      cur++;
      maxN = max(maxN, cur);
    }
    if (str[i] == '0') {
      
      cur = 0;
    }
  }
  return maxN;
}

int main() {
  int res = maxConsecutiveOnes("10111010111111101");
  cout << res << endl;
}