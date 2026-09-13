/*
第25题：重塑矩阵（二维数组）
描述：给定一个 r 行 c 列的整数矩阵，以及两个正整数
r2、c2。若能在不改变元素顺序的前提下 把矩阵重塑为 r2 行 c2
列，则输出重塑后的矩阵；否则输出原矩阵（按行优先读取原矩阵并逐行填充新矩阵）。
输入：第一行四个整数 r、c、r2、c2，接下来 r 行每行 c 个整数。
输出：重塑后的矩阵共 r2 行，每行 c2 个整数（空格隔开）；若无法重塑则输出原矩阵。
示例：2 2 1 4 / 1 2 / 3 4 ->
1 2 3 4
考察点：二维下标展平为一维（i * c + j）与还原（flat / c2、flat % c2）、
合法性判断 r * c == r2 * c2。
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int r, c, r2, c2;
  r = 2;
  c = 2;
  r2 = 1;
  r2 = 4;
  vector<vector<int>> mat(r, vector<int>(c));
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      cin >> mat[i][j];

  if (r * c != r2 * c2) {
    // 无法重塑，输出原矩阵
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        cout << mat[i][j];
        if (j != c - 1)
          cout << ' ';
      }
      cout << '\n';
    }
  } else {
    // 可以重塑
    vector<vector<int>> res(r2, vector<int>(c2));
    int k = 0;
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        int nr = k / c2;
        int nc = k % c2;
        res[nr][nc] = mat[i][j];
        ++k;
      }
    }
    // 输出重塑后的矩阵
    for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
        cout << res[i][j];
        if (j != c2 - 1)
          cout << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}