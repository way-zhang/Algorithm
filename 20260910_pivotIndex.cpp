/*
第19题：寻找数组的中心下标（前缀和）
描述：数组的中心下标指该下标左侧所有元素之和等于右侧所有元素之和（不包含该元素本身）。
若有多个中心下标，返回最左边的那一个；若不存在则返回 -1。
输入：第一行 n，第二行 n 个整数。
输出：中心下标，或 -1。
示例：6 / 1 7 3 6 5 6 -> 3
考察点：前缀和思想（左侧和 leftSum 与 总和 total 的关系：右和 = total - leftSum
- 当前元素）、 一次遍历避免重复求和。
*/
#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &arr) {
  int totalSum = 0;
  int sum = 0;
  for (int item : arr) {
    totalSum += item;
  }

  for (int i = 0; i < arr.size(); i++) {
    if (sum * 2 + arr[i] == totalSum) {
      return i;
    }
    sum += arr[i];
  }
  return -1;
}
int main() {
  vector<int> arr = {1, 2, 3, 4, 3, 2, 1, 4};
  int res = pivotIndex(arr);
  cout << res << endl;
}