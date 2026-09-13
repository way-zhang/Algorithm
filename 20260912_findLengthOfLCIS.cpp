/*
第5题：最长连续递增序列（计数遍历）
描述：给定一个整数数组，找出其中最长的连续递增子序列的长度。
"连续"指下标相邻，"递增"指严格递增（nums[i] < nums[i+1]）。
输入：第一行 n，第二行 n 个整数。
输出：最长连续递增序列的长度。
示例：5 / 1 3 5 4 7 -> 3
考察点：一次遍历同时维护"当前连续递增长度 cur"与"历史最大值"，
递增中断时把 cur 重置为 1 而不是清零。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findLengthOfLCIS(vector<int> nums) {
  int cur = 1, best = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > nums[i - 1]) {
      cur++;
    } else {
      cur = 1;
    }
    best = max(best, cur);
  }
  return best;
}

int main() { cout << findLengthOfLCIS({1, 3, 5, 4, 7}) << endl; }
