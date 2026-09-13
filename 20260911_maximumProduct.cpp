/*
第30题：三个数的最大乘积（极值）
描述：给定一个整数数组（可能包含负数，长度 n >=
3），从中任取三个数，使它们的乘积最大， 输出这个最大乘积。 输入：第一行 n（n >=
3），第二行 n 个整数。 输出：最大乘积。 示例：5 / 1 2 3 4 -> 24 ；另一个：6 /
-10 -10 1 3 2 5 -> 500
考察点：排序后比较两种情况——最大的三个数之积、最小的两个（可能为负）与最大数之积；
注意两个负数相乘为正、结果可能超出 int 范围。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long maxProductOfThree(vector<int> &nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());

  long long product1 = 1LL * nums[n - 1] * nums[n - 2] * nums[n - 3];
  long long product2 = 1LL * nums[0] * nums[1] * nums[n - 1];

  return max(product1, product2);
}

int main() {

  vector<int> nums = {1, 2, 3, 4, -5, -6};
  cout << maxProductOfThree(nums) << endl;
  return 0;
}