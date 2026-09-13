/*
第6题：查找子串首次出现的位置（暴力匹配）
描述：给定两个字符串 haystack 和 needle，在 haystack 中找出 needle 第一次出现的下标；
若不存在则返回 -1（约定空串 needle 视为在下标 0 处出现）。
输入：两行，第一行为 haystack，第二行为 needle。
输出：首次出现的下标，或 -1。
示例：hello / ll -> 2
考察点：暴力匹配的双层循环（外层枚举起点、内层逐字符比较）、匹配失败后起点回退、
空串与长度不足的边界判断。
*/
#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
  int n = haystack.size(), m = needle.size();
  if (m == 0) {
    return 0;
  }
  for (int i = 0; i + m <= n; i++) {
    int j = 0;
    while (j < m && haystack[i + j] == needle[j]) {
      j++;
    }
    if (j == m) {
      return i;
    }
  }
  return -1;
}

int main() { cout << strStr("hello", "ll") << endl; }
