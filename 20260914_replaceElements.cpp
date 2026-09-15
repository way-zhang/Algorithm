/*
第6题：将每个元素替换为右侧最大元素（倒序扫描）
描述：给定一个整数数组，把每个元素替换为它右侧所有元素中的最大值；
最后一个元素没有右侧元素，替换为 -1。
输入：第一行 n，第二行 n 个整数。
输出：替换后的数组（空格隔开）。
示例：6 / 17 18 5 4 6 1 -> 18 6 6 6 1 -1
考察点：从右往左一次遍历，维护"当前已扫描过的最大值"，
先记下旧值再更新最大值，避免覆盖后无法继续。
*/
#include <iostream>
#include <vector>
using namespace std;

void replaceElements(vector<int> &arr) {
  int maxRight = -1;
  for (int i = arr.size() - 1; i >= 0; i--) {
    int cur = arr[i];
    arr[i] = maxRight;
    if (cur > maxRight) {
      maxRight = cur;
    }
  }
}

int main() {
  vector<int> arr = {17, 18, 5, 4, 6, 1};
  replaceElements(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
