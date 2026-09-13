/*
第9题：有多少小于当前数字的数（计数统计）
描述：给定一个整数数组，对每个元素回答：数组中比它小的元素有多少个
（不包含自身，重复元素按个数计）。
输入：第一行 n，第二行 n 个整数。
输出：n 个整数，依次对应每个位置元素的答案（空格隔开）。
示例：5 / 8 1 2 2 3 -> 4 0 1 1 3
考察点：双重循环逐个计数的基础写法；也可排序后用映射一次求出所有相同元素共用的答案。
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> nums) {
  vector<int> res;
  for (int i = 0; i < nums.size(); i++) {
    int cnt = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] < nums[i]) {
        cnt++;
      }
    }
    res.push_back(cnt);
  }
  return res;
}

int main() {
  vector<int> res = smallerNumbersThanCurrent({8, 1, 2, 2, 3});
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}
