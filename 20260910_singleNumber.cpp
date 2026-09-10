/*
第16题：只出现一次的数字（异或）
描述：给定一个非空整数数组，除某个元素只出现一次外，其余元素均出现两次，
找出那个只出现一次的元素。要求线性时间复杂度，且不使用额外空间。
输入：第一行 n，第二行 n 个整数。
输出：只出现一次的元素。
示例：5 / 4 1 2 1 2 -> 4
考察点：异或运算性质（a^a=0、a^0=a、满足交换律与结合律），把所有元素异或起来，
成对出现的元素互相抵消，剩下的就是答案。
*/
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &arr) {
  int num = 0;
  for (int i = 0; i < arr.size(); i++) {
    num ^= arr[i];
  }
  return num;
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
  int res = singleNumber(arr);
  cout << res << endl;
}
