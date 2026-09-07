#include <iostream>
#include <vector>
using namespace std;
/*
第2题：查找最大值与最小值
描述：输入n个整数，找出其中的最大值和最小值，并输出它们的索引位置（从0开始）。若有多个相同极值，输出最先出现的索引。
输入：第一行n，第二行n个整数。
输出：最大值 索引 最小值 索引。
示例：5 / 3 1 4 1 5 -> 4 2 1 1
考察点：初始化哨兵变量、条件判断、数组下标跟踪。
*/
void maxMin(vector<int> nums) {
  int maxNum, minNum;
  int maxi = 0, mini = 0;
  minNum = nums[0];
  maxNum = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > maxNum) {
      maxNum = nums[i];
      maxi = i;
    }
    if (nums[i] < minNum) {
      minNum = nums[i];
      mini = i;
    }
  }
  cout << maxNum << ' ' << maxi << ' ' << minNum << ' ' << mini << endl;
}

int main() { maxMin({1, 2, 3, 5, 8}); }