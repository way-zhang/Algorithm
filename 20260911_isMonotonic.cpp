/*
第29题：单调数列（一次遍历）
描述：如果数组是单调递增或单调递减的（相邻元素允许相等），返回 true，否则返回
false。 输入：第一行 n，第二行 n 个整数。 输出：true 或 false。 示例：5 / 1 2 2
3 -> true ；另一个：4 / 1 3 2 4 -> false
考察点：一次遍历中同时维护"是否递增""是否递减"两个标记；
也可先由首尾元素确定方向，再检查相邻元素是否破坏该方向。
*/
#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int> &arr) {
  int n = arr.size();
  if (arr[0] == arr[n - 1]) {
    int m = arr[0];
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] != m) {
        return false;
      }
    }
    return true;
  }
  bool flg = arr[0] < arr[n - 1];
  for (int i = 1; i < arr.size(); i++) {
    if ((flg && arr[i - 1] > arr[i]) || !flg && arr[i - 1] < arr[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  vector<int> arr = {1, 2, 3, 5, 4};
  bool res = isMonotonic(arr);
  cout << res << endl;
}