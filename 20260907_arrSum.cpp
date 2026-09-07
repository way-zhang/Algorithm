#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

/*
第1题：数组求和与平均值
描述：给定一个整数数组，计算所有元素的和并输出平均值。
输入：第一行n（数组长度），第二行n个整数。
输出：和 和 平均值（空格隔开）。
示例：5 / 1 2 3 4 5 -> 15 3
*/
void sum(vector<int> nums) {
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
  }
  float avg = (sum * 1.0) / (nums.size() * 1.0);

  cout << setprecision(2) << sum << ' ' << avg << endl;
}
int main() { sum({1, 2, 3, 5, 8}); }