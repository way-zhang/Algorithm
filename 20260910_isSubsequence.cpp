/*
第20题：判断子序列（双指针）
描述：给定字符串 s 和 t，判断 s 是否为 t 的子序列。子序列是由原字符串删除若干个
（可以为 0 个）字符且不改变剩余字符相对位置后形成的新字符串。
输入：两行，第一行为 s，第二行为 t。
输出：true 或 false。
示例：abc / ahbgdc -> true
考察点：双指针（i 指向 s，j 遍历 t，字符相等时 i 才前进）、遍历结束后判断 i
是否已到达 s 的末尾。
*/
#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
  int i = 0;
  int j = 0;
  while (i < (int)s.size() && j < (int)t.size()) {
    if (s[i] == t[j]) {
      i++;
    }
    j++;
  }
  return i == (int)s.size();
}

int main() {
  bool res = isSubsequence("test", "string abc test");
  cout << res << endl;
}