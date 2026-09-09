/*
第3题：杨辉三角（前 n 行）
描述：输入行数 n，输出杨辉三角的前 n 行。
杨辉三角每行首尾元素为 1，中间元素等于上一行相邻两个元素之和，
即第 i 行第 j 个元素 = 第 i-1 行第 j-1 个元素 + 第 i-1 行第 j 个元素。
输入：一个整数 n (1 ≤ n ≤ 20)。
输出：杨辉三角前 n 行，每行元素用空格隔开。
示例：5 ->
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
考察点：二维动态数组的逐行扩容（resize）、利用上一行递推当前行、越界边界处理。
*/
#include <iostream>
#include <vector>
using namespace std;

void yangHuiTriangle(int n) {
  vector<vector<int>> rows(n);
  for (int i = 0; i < n; i++) {
    rows[i].resize(i + 1, 1);
    for (int j = 1; j < i; j++) {
      rows[i][j] = rows[i - 1][j - 1] + rows[i - 1][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < rows[i].size(); j++) {
      cout << rows[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() { yangHuiTriangle(5); }
