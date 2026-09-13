/*
第1题：长度最小的子数组（滑动窗口）
描述：给定一个正整数数组和一个正整数 target，找出数组中满足"元素之和 >= target"的
长度最小的连续子数组，返回其长度；若不存在这样的子数组则返回 0。
输入：第一行两个整数 n 和 target，第二行 n 个正整数。
输出：满足条件的最短长度，或 0。
示例：6 7 / 2 3 1 2 4 3 -> 2
考察点：滑动窗口——右指针不断扩张累加窗口和，当和 >= target 时收缩左指针并更新答案、
窗口和的增减维护。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, vector<int> nums) {
  int left = 0, sum = 0;
  int best = nums.size() + 1;
  for (int right = 0; right < nums.size(); right++) {
    sum += nums[right];
    while (sum >= target) {
      best = min(best, right - left + 1);
      sum -= nums[left++];
    }
  }
  return best == nums.size() + 1 ? 0 : best;
}

int main() { cout << minSubArrayLen(7, {2, 3, 1, 2, 4, 3}) << endl; }
