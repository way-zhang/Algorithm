/*
第9题：有效的山脉数组（递增再递减）
描述：若数组长度至少为 3，且存在一个峰值下标，使得从开头到峰值严格递增、
从峰值到结尾严格递减，则称它是有效的山脉数组。给定数组，判断其是否为有效山脉数组。
输入：第一行 n，第二行 n 个整数。
输出：true 或 false。
示例：4 / 0 3 2 1 -> true ；另一个：3 / 1 2 3 -> false
考察点：先向右找严格递增段，注意峰值不能是首元素或尾元素（否则缺少上坡或下坡），
再从峰值向右验证严格递减段。
*/
#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int> arr) {
  int n = arr.size();
  if (n < 3) {
    return false;
  }
  int i = 0;
  while (i + 1 < n && arr[i] < arr[i + 1]) {
    i++;
  }
  if (i == 0 || i == n - 1) {
    return false;
  }
  while (i + 1 < n && arr[i] > arr[i + 1]) {
    i++;
  }
  return i == n - 1;
}

int main() {
  cout << (validMountainArray({0, 3, 2, 1}) ? "true" : "false") << endl;
  cout << (validMountainArray({1, 2, 3}) ? "true" : "false") << endl;
}
