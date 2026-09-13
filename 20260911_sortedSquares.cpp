/*
第22题：有序数组的平方（双指针）
描述：给定一个按非递减顺序排列的整数数组（可能包含负数），返回每个元素的平方组成的新数组，
要求结果仍按非递减顺序排列，不要直接对平方结果整体排序。
输入：第一行 n，第二行 n 个升序整数。
输出：平方后的升序数组（空格隔开）。
示例：5 / -4 -1 0 3 10 -> 0 1 9 16 100
考察点：双指针从数组两端比较绝对值大小、把较大者的平方从结果数组末尾往前填充。
*/
#include <cmath> // 或 <cstdlib> 用于 abs
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(const vector<int> &nums) {
  int n = nums.size();
  vector<int> res(n);
  int left = 0, right = n - 1;
  int pos = n - 1; // 从结果数组末尾开始填充

  while (left <= right) {
    int leftVal = abs(nums[left]);
    int rightVal = abs(nums[right]);

    if (leftVal > rightVal) {
      res[pos] = leftVal * leftVal;
      left++;
    } else {
      res[pos] = rightVal * rightVal;
      right--;
    }
    pos--;
  }
  return res;
}

int main() {

  vector<int> nums = {-3, -1, 0, 2, 4};

  vector<int> result = sortedSquares(nums);

  for (int i = 0; i < nums.size(); ++i) {
    cout << result[i] << (i == nums.size() - 1 ? '\n' : ' ');
  }
  return 0;
}