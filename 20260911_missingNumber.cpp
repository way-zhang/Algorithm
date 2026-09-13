
/*
第26题：丢失的数字（求和/异或）
描述：给定一个包含 0~n 之间 n 个不同整数的数组，找出其中缺失的那一个数字。
输入：第一行 n，第二行 n 个取自 0~n 且互不相同的整数。
输出：缺失的数字。
示例：5 / 0 1 2 3 5 -> 4
考察点：等差数列求和公式 total = n*(n+1)/2 再减去数组元素之和；
也可用"下标与元素异或"或先排序再找断点。
*/
#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int> &nums) {
  int n = nums.size();
  int res = n;
  for (int i = 0; i < n; ++i) {
    res ^= i ^ nums[i];
  }
  return res;
}

int main() {
  vector<int> nums = {0, 1, 2, 3, 4, 5, 7};
  cout << missingNumber(nums) << endl;
  return 0;
}