/*
第8题：托普利茨矩阵（二维数组）
描述：如果矩阵中每一条从左上到右下的对角线上的元素都相同，则称它为托普利茨矩阵。
给定一个 m 行 n 列的整数矩阵，判断它是否为托普利茨矩阵。
输入：第一行两个整数 m 和 n，接下来 m 行每行 n 个整数。
输出：true 或 false。
示例：3 4 / 1 2 3 4 / 5 1 2 3 / 9 5 1 2 -> true ；另一个：2 2 / 1 2 / 2 2 -> false
考察点：对满足 i > 0 且 j > 0 的每个元素，判断它是否等于左上角的 matrix[i-1][j-1]，
无需真的遍历对角线。
*/
#include <iostream>
#include <vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>> matrix) {
  for (int i = 1; i < matrix.size(); i++) {
    for (int j = 1; j < matrix[i].size(); j++) {
      if (matrix[i][j] != matrix[i - 1][j - 1]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  vector<vector<int>> a = {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};
  vector<vector<int>> b = {{1, 2}, {2, 2}};
  cout << (isToeplitzMatrix(a) ? "true" : "false") << endl;
  cout << (isToeplitzMatrix(b) ? "true" : "false") << endl;
}
