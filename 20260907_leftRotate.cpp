/*
第10题：数组循环左移 K 位
描述：给定一个长度为 n 的数组和一个非负整数 k，将数组中的元素循环左移 k
个位置。例如 [1,2,3,4,5] 左移 2 位变为 [3,4,5,1,2]。 输入：第一行 n 和
k（空格隔开），第二行 n 个整数。 输出：移动后的数组。 示例：5 2 / 1 2 3 4 5 -> 3
4 5 1 2 考察点：取模运算（k %= n
处理无效移动）、三段反转法（或借助临时数组）、指针/下标映射。
 */
#include <iostream>
#include <vector>

using namespace std;

void leftRotate(vector<int> &arr, int k) {
  int n = arr.size();
  k %= n;
  if (k == 0)
    return;

  vector<int> temp(k);
  for (int i = 0; i < k; ++i)
    temp[i] = arr[i];
  for (int i = k; i < n; ++i)
    arr[i - k] = arr[i];
  for (int i = 0; i < k; ++i)
    arr[n - k + i] = temp[i];
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  leftRotate(arr, 3);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}