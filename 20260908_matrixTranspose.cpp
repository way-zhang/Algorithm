/*
第9题：矩阵转置（二维数组）
描述：给定一个 n 行 m 列的整数矩阵（二维数组），输出它的转置矩阵（即 m 行 n
列，原矩阵的第 i 行第 j 列元素变为新矩阵的第 j 行第 i 列）。
输入：第一行两个整数 n 和 m，接下来 n 行，每行 m 个整数。
输出：转置后的矩阵，共 m 行，每行 n 个整数（空格隔开）。
示例：2 3 / 1 2 3 / 4 5 6 ->
1 4
2 5
3 6
考察点：二维数组的遍历顺序（行优先 vs 列优先）、输出时下标对应关系（[j][i]）。
*/
#include <iostream>
#include <vector>

using namespace std;

void matrixTranspose(vector<vector<int>> &nums) {
  int n = nums.size(); // 原矩阵行数
  if (n == 0) {
    return;
  }
  int m = nums[0].size();
  vector<vector<int>> res(m, vector<int>(n, 0));
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums[i].size(); j++) {
      res[j][i] = nums[i][j];
    }
  }
  nums = res;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums[i].size(); j++) {
      cout << nums[i][j] << ' ';
    }
    cout << endl;
  }
}
int main() {
  vector<vector<int>> nums = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  matrixTranspose(nums);
}