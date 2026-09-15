/*
第10题：分糖果（集合统计种类）
描述：给定一个长度为偶数 n 的数组，数组中每个数表示一颗糖果的种类编号。
把这些糖果平均分给两个人（每人 n/2 颗），求其中一人最多能拿到多少种不同的糖果。
输入：第一行 n（偶数），第二行 n 个整数（糖果种类编号）。
输出：最多能拿到的糖果种类数。
示例：6 / 1 1 2 2 3 3 -> 3
考察点：用 set 统计糖果的种类总数 kinds；若 kinds >= n/2，受数量限制最多为 n/2，
否则可以拿到全部种类，答案为 min(kinds, n/2)。
*/
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int distributeCandies(vector<int> &arr) {
  int n = arr.size() / 2;
  map<int, int> mapKinds;
  for (int i = 0; i < arr.size(); i++) {
    mapKinds[arr[i]]++;
  }

  return min((int)mapKinds.size(), n);
}

int main() {
  vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4};
  int res = distributeCandies(arr);
  cout << res << endl;
}