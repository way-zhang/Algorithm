/*
第15题：最大子数组和（动态规划入门）
描述：给定一个整数数组（可能包含负数），找出一个具有最大和的连续子数组
（子数组至少包含一个元素），返回其最大和。
提示：设 dp 表示以当前元素结尾的最大子数组和，则 dp = max(当前元素, dp +
当前元素)， 答案取所有 dp 中的最大值。 输入：第一行 n，第二行 n 个整数。
输出：最大子数组和。
示例：9 / -2 1 -3 4 -1 2 1 -5 4 -> 6
考察点：动态规划入门、以当前元素结尾的最优子结构、用滚动变量代替数组节省空间。
*/
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> arr) {
  int maxSum = 0, sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum = max(sum + arr[i], arr[i]);
    maxSum = max(maxSum, sum);
  }
  return maxSum;
}

int main() {
  int res = maxSubArray({-2, 1, -3, 4, -1, 2, 1, -5, 4, 2, -2, 1});
  cout << res << endl;
}