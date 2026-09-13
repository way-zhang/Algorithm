/*
第5题：矩阵对角线元素之和（二维下标规律）
描述：给定一个 n 行 n 列的整数方阵，求两条对角线（主对角线 i == j、
副对角线 i + j == n - 1）上所有元素之和；若中心元素同时位于两条对角线上，则只计算一次。
输入：第一行 n，接下来 n 行每行 n 个整数。
输出：两条对角线元素之和。
示例：3 / 1 2 3 / 4 5 6 / 7 8 9 -> 25
考察点：两条对角线的下标规律、奇数阶方阵中心元素的去重处理。
*/
#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> mat) {
  int n = mat.size();
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += mat[i][i] + mat[i][n - 1 - i];
  }
  if (n % 2 == 1) {
    sum -= mat[n / 2][n / 2];
  }
  return sum;
}

int main() {
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << diagonalSum(mat) << endl;
}
