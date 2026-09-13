/*
第8题：好数对的数目（下标对枚举）
描述：给定一个整数数组，统计满足 i < j 且 nums[i] == nums[j] 的下标对 (i, j) 的数目。
输入：第一行 n，第二行 n 个整数。
输出：好数对的数目。
示例：6 / 1 2 3 1 1 3 -> 4
考察点：双重循环枚举下标对的朴素解法；进阶可用计数思路——
某个值出现 c 次，则它贡献 c * (c - 1) / 2 个数对。
*/
#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int> nums) {
  int cnt = 0;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] == nums[j]) {
        cnt++;
      }
    }
  }
  return cnt;
}

int main() { cout << numIdenticalPairs({1, 2, 3, 1, 1, 3}) << endl; }
