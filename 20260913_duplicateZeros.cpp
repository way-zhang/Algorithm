/*
第4题：复写零（从后往前原地覆写）
描述：给定一个整数数组，将其中每个 0 都再复写一遍（即每个 0 后面紧接着插入一个 0），
其余元素保持原顺序，数组长度不变，超出长度的元素被丢弃。要求原地操作。
输入：第一行 n，第二行 n 个整数。
输出：复写零后的数组（空格隔开）。
示例：8 / 1 0 2 3 0 4 5 0 -> 1 0 0 2 3 0 0 4
考察点：先统计 0 的个数确定有效边界，再从后往前用双指针覆写，
避免从前往后覆写导致元素被覆盖丢失。
*/
#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int> &arr) {
  int n = arr.size();
  int zeros = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      zeros++;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] == 0) {
      if (i + zeros < n) {
        arr[i + zeros] = 0;
      }
      zeros--;
      if (i + zeros < n) {
        arr[i + zeros] = 0;
      }
    } else if (i + zeros < n) {
      arr[i + zeros] = arr[i];
    }
  }
}

int main() {
  vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
  duplicateZeros(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
