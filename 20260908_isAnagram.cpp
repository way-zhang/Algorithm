/*
第3题：有效的字母异位词
描述：给定两个仅包含小写字母的字符串 s 和
t，判断它们是否为字母异位词（即两个字符串的字母种类和数量完全相同，只是顺序可能不同）。
输入：两行字符串。
输出：true 或 false。
示例：anagram / nagaram -> true ；rat / car -> false
考察点：哈希表思想（用 int[26] 数组计数）、字符与下标映射（s[i] - 'a'）。
*/
#include <iostream>
#include <map>
using namespace std;

bool isAnagram(string s, string t) {
  map<char, int> mapS;
  if (s.size() != t.size()) {
    return false;
  }
  for (int i = 0; i < s.size(); i++) {
    mapS[s[i]]++;
    mapS[t[i]]--;
  }
  for (auto &p : mapS) {
    if (p.second != 0) {
      return false;
    }
  }
  return true;
}
int main() {
  bool res = isAnagram("qwerasd", "erwqdss");
  cout << res << endl;
}