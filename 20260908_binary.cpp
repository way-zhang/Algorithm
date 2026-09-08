/*
第1题：二分查找（有序数组）
描述：给定一个升序排列的整数数组和一个目标值
target，使用二分查找算法找到目标值在数组中的索引（从0开始）。如果不存在，返回
-1。 输入：第一行两个整数 n 和 target，第二行 n 个升序整数。 输出：目标值的索引
或 -1。 示例：5 3 / 1 2 3 4 5 -> 2 考察点：二分边界条件（left < right 还是
<=）、中间值 mid 的更新逻辑（防死循环）。
*/
#include <iostream>
#include <vector>

using namespace std;

int binarySrch(vector<int> arr, int target) {
  int l = 0, r = arr.size() - 1;

  while (l <= r) {
    int mid = (r - l) / 2 + l;
    if (target == arr[mid]) {
      return mid;
    }
    if (target > arr[mid]) {
      l = mid + 1;
    }
    if (target < arr[mid]) {
      r = mid - 1;
    }
  }
  return -1;
}

int main() {
  int res = binarySrch({1, 2, 3, 4, 5, 6, 7, 8, 9}, 9);
  cout << res << endl;
}
