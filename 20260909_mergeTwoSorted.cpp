/*
第5题：合并两个有序数组（双指针）
描述：给定两个已按升序排列的数组 a 和 b，将它们合并为一个升序数组并输出，
要求不借助排序函数，只用双指针扫描实现。
思想：i、j 分别指向两个数组开头，每次把较小者放入结果，谁小谁后移；
某个数组遍历完后，把另一个数组剩余元素直接追加。
输入：第一行两个整数 n 和 m，第二行 n 个升序整数，第三行 m 个升序整数。
输出：合并后的升序数组（空格隔开）。
示例：4 4 / 1 3 5 7 / 2 4 6 8 -> 1 2 3 4 5 6 7 8
考察点：双指针的移动条件（小于等于时的并列处理）、剩余元素追加的收尾循环。
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoSorted(vector<int> a, vector<int> b) {
  vector<int> res;
  int i = 0, j = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] <= b[j]) {
      res.push_back(a[i++]);
    } else {
      res.push_back(b[j++]);
    }
  }
  while (i < a.size()) {
    res.push_back(a[i++]);
  }
  while (j < b.size()) {
    res.push_back(b[j++]);
  }
  return res;
}

int main() {
  vector<int> res = mergeTwoSorted({1, 3, 5, 7}, {2, 4, 6, 8});
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}
