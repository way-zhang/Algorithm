/*
第7题：同构字符串（双向映射）
描述：给定两个字符串 s 和 t，判断它们是否同构：s 中每个字符都能被唯一地替换成
t 中同一位置的字符，且映射关系要前后一致，不能出现两个不同的字符映射到同一个字符的情况。
输入：两行，分别为 s 和 t。
输出：true 或 false。
示例：egg / add -> true ；另一个：foo / bar -> false
考察点：建立两张映射表（s→t 与 t→s）互相校验、检测映射冲突。
*/
#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
  if (s.size() != t.size()) {
    return false;
  }
  int m1[256] = {0}, m2[256] = {0};
  for (int i = 0; i < s.size(); i++) {
    unsigned char a = s[i], b = t[i];
    if (m1[a] != m2[b]) {
      return false;
    }
    m1[a] = i + 1;
    m2[b] = i + 1;
  }
  return true;
}

int main() {
  cout << (isIsomorphic("egg", "add") ? "true" : "false") << endl;
  cout << (isIsomorphic("foo", "bar") ? "true" : "false") << endl;
}
