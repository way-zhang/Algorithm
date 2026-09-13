/*
第8题：检测大写字母（分类讨论）
描述：给定一个单词，判断其大写字母的使用是否规范：全部字母都大写（如 "USA"）、
全部字母都小写（如 "hello"）、或仅首字母大写（如 "Google"）都算规范，其余情况不规范。
输入：一行单词（只含大小写字母）。
输出：true 或 false。
示例：FlaG -> false
考察点：统计大写字母的个数并与单词长度比较，分类讨论三种合法情况。
*/
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool detectCapitalUse(string word) {
  int upper = 0;
  for (int i = 0; i < word.size(); i++) {
    if (isupper((unsigned char)word[i])) {
      upper++;
    }
  }
  if (upper == 0 || upper == word.size()) {
    return true;
  }
  return upper == 1 && isupper((unsigned char)word[0]);
}

int main() { cout << (detectCapitalUse("FlaG") ? "true" : "false") << endl; }
