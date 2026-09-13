/*
第6题：两个数组的交集（哈希/双指针）
描述：给定两个整数数组，输出它们的交集（结果中每个元素唯一，输出顺序不限）。
输入：第一行两个整数 n 和 m，第二行 n 个整数，第三行 m 个整数。
输出：交集中的元素（空格隔开，已去重，顺序不限）。
示例：5 5 / 1 2 2 1 3 / 2 2 3 4 5 -> 2 3
考察点：用 set / 哈希表完成去重与"是否存在"的判断；也可排序后用双指针求交集。
*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> a, vector<int> b) {
  set<int> sa(a.begin(), a.end());
  set<int> res;
  for (int i = 0; i < b.size(); i++) {
    if (sa.count(b[i])) {
      res.insert(b[i]);
    }
  }
  return vector<int>(res.begin(), res.end());
}

int main() {
  vector<int> res = intersection({1, 2, 2, 1, 3}, {2, 2, 3, 4, 5});
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}
