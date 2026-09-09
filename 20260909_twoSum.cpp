/*
第4题：两数之和（暴力枚举）
描述：给定一个整数数组 nums 和一个目标值 target，找出数组中两个数（不同下标），
使它们的和等于 target，输出这两个数的下标（从 0 开始，小下标在前）。
题目保证恰好存在一组答案。
输入：第一行两个整数 n 和 target，第二行 n 个整数。
输出：两个下标（空格隔开）。
示例：4 9 / 2 7 11 15 -> 0 1
考察点：双重循环枚举所有下标组合 (i, j) 且 j > i 去重、找到答案后及时 break/return。
*/
#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        cout << i << ' ' << j << endl;
        return;
      }
    }
  }
}

int main() { twoSum({2, 7, 11, 15}, 9); }
