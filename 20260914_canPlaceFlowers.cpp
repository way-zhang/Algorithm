/*
第3题：种花问题（相邻约束贪心）
描述：给定一个由 0 和 1 组成的花坛数组（1 表示已种花，0 表示空位），规定不能在两支
相邻的位置同时种花。给定 n，判断能否在不移动已有花的前提下再种下 n 支花。
输入：第一行两个整数 m 和 n，第二行 m 个 0 或 1。
输出：true 或 false。
示例：5 1 / 1 0 0 0 1 -> true ；另一个：5 2 / 1 0 0 0 1 -> false
考察点：遍历时判断当前位置左右两侧是否都为空（首尾边界可视为空），
一旦在该位置种下就把该位标记为 1，避免影响后续判断。
*/
#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> flowerbed, int n) {
  int count = 0;
  int m = flowerbed.size();
  for (int i = 0; i < m; i++) {
    if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
        (i == m - 1 || flowerbed[i + 1] == 0)) {
      flowerbed[i] = 1;
      count++;
    }
  }
  return count >= n;
}

int main() {
  cout << (canPlaceFlowers({1, 0, 0, 0, 1}, 1) ? "true" : "false") << endl;
  cout << (canPlaceFlowers({1, 0, 0, 0, 1}, 2) ? "true" : "false") << endl;
}
