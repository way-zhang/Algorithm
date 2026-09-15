/*
第3题：保持城市天际线（二维行/列最大值）
描述：给定一个 n 行 n 列的矩阵表示城市中每栋建筑的高度。你可以任意增加每栋建筑的高度，
但不能改变从四个方向看过去的天际线，即任意一行的最大值和任意一列的最大值都必须保持不变。
求所有建筑高度最多能增加的总和。
输入：第一行 n，接下来 n 行每行 n 个整数。
输出：所有建筑可以增加的高度总和。
示例：2 / 3 0 / 0 4 -> 6
考察点：先分别求出每一行与每一列的最大值，再对每个格子计算
min(该行最大值, 该列最大值) - 当前高度并累加。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int>> grid) {
  int n = grid.size();
  vector<int> rowMax(n, 0), colMax(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rowMax[i] = max(rowMax[i], grid[i][j]);
      colMax[j] = max(colMax[j], grid[i][j]);
    }
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum += min(rowMax[i], colMax[j]) - grid[i][j];
    }
  }
  return sum;
}

int main() {
  vector<vector<int>> grid = {{3, 0}, {0, 4}};
  cout << maxIncreaseKeepingSkyline(grid) << endl;
}
