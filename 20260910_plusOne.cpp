/*
第12题：加一（数组模拟进位）
描述：给定一个由整数组成的非空数组，表示一个非负整数（最高位在数组开头，
每个元素只存一位数字）。将该整数加一，返回结果数组。
输入：第一行 n，第二行 n 个 0~9 的整数。
输出：加一后的数组（空格隔开）。
示例：3 / 1 2 3 -> 1 2 4 ；另一个：1 / 9 -> 1 0
考察点：从末位开始模拟进位、遇 9 变 0 继续向前、全是 9 时需要在最前面插入 1。
*/
#include <iostream>
#include <vector>
using namespace std;
void plusOne(vector<int> &arr) {
  for (int i = arr.size() - 1; i >= 0; i--) {
    if (arr[i] < 9) {
      arr[i]++;
      return;
    }
    arr[i] = 0;
  }
  arr.insert(arr.begin(), 1);
}

int main() {
  vector<int> arr = {9};
  plusOne(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}