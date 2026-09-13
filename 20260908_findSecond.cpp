/*
第5题：寻找数组中第二大的数
描述：给定一个非空整数数组（长度 ≥
2），找出数组中第二大的元素。注意：如果存在多个并列最大值，第二大仍视为该最大值（例如
[2,2,1] 第二大是 2）。若所有元素都相同，则不存在第二大，输出 -1。 输入：第一行
n，第二行 n 个整数。 输出：第二大元素的值 或 -1。 示例：4 / 3 1 4 4 -> 4 ；3 / 1
1 1 -> -1 考察点：双哨兵变量（max1 和
max2）的初始化与更新逻辑、数组元素不相等时的严格判断。
*/
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int findSecondNumber(vector<int> &arr) {
  int max1 = arr[0], max2 = INT32_MIN;
  bool hasDifferent = false;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != max1) hasDifferent = true;
    if (max1 < arr[i]) {
      max2 = max1;
      max1 = arr[i];
    } else if (max2 > arr[i] && max1 < arr[i]) {
      max2 = arr[i];
    } else if (max1 == arr[i]) {
      max2 = max1;
    }
  }
  if(!hasDifferent){
    return -1;
  }
  return max2;
}

int main() {
  vector<int> arr = {4,4,4,4,4,5,4};
  int res = findSecondNumber(arr);
  cout << res << endl;
}