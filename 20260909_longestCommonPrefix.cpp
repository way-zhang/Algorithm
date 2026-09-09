/*
第10题：最长公共前缀（字符串）
描述：给定一个字符串数组，找出所有字符串的最长公共前缀（LCP），
即从第 0 位开始逐位比较所有字符串，取大家都相同的连续前缀；
若不存在公共前缀则输出空串。
输入：第一行整数 n，接下来 n 行每行一个字符串。
输出：最长公共前缀。
示例：3 / flower / flow / flight -> fl
考察点：纵向比较（逐列扫描）或横向比较、长度越界（j >= strs[i].size()）时立即截断。
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
  if (strs.empty()) {
    return "";
  }
  for (int j = 0; j < strs[0].size(); j++) {
    char ch = strs[0][j];
    for (int i = 1; i < strs.size(); i++) {
      if (j >= strs[i].size() || strs[i][j] != ch) {
        return strs[0].substr(0, j);
      }
    }
  }
  return strs[0];
}

int main() {
  vector<string> strs = {"flower", "flow", "flight"};
  cout << longestCommonPrefix(strs) << endl;
}
