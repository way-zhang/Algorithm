/*
第9题：判断能否形成等差数列（排序）
描述：给定一个整数数组，判断能否通过重新排列数组，使它成为一个等差数列
（即任意相邻两个元素之差都相同）。
输入：第一行 n，第二行 n 个整数。
输出：true 或 false。
示例：3 / 3 5 1 -> true ；另一个：3 / 1 2 4 -> false
考察点：升序排序后计算相邻差值并逐一比较是否相等；注意 n 为 1 或 2 时结果恒为 true。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canMakeArithmeticProgression(vector<int> arr) {
  sort(arr.begin(), arr.end());
  int d = arr[1] - arr[0];
  for (int i = 2; i < arr.size(); i++) {
    if (arr[i] - arr[i - 1] != d) {
      return false;
    }
  }
  return true;
}

int main() {
  cout << (canMakeArithmeticProgression({3, 5, 1}) ? "true" : "false") << endl;
  cout << (canMakeArithmeticProgression({1, 2, 4}) ? "true" : "false") << endl;
}
