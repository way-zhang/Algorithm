/*
第18题：统计字符串中各类字符个数（字符分类）
描述：输入一行字符串，分别统计其中英文字母、数字字符、空格和其他字符的个数。
输入：一行字符串（用 getline 读取，可能包含空格）。
输出：字母数 数字数 空格数 其他字符数（空格隔开）。
示例：Hello 123! -> 5 3 1 1
考察点：getline 读取含空格的整行、字符分类判断（isalpha /
isdigit，或手写字符区间比较）、 多分支条件的优先级。
*/
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

string countCharType(string str) {
  int letterCount = 0, numCount = 0, spaceCount = 0, otherCount = 0;
  for (int i = 0; i < str.size(); i++) {
    char ch = str[i];
    if (ch == ' ') {
      spaceCount++;
    } else if (ch >= '0' && ch <= '9') {
      numCount++;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      letterCount++;
    } else {
      otherCount++;
    }
  }
  return to_string(letterCount) + " " + to_string(numCount) + " " +
         to_string(spaceCount) + " " + to_string(otherCount);
}

int main() {
  string req;
  getline(cin, req);
  cout << countCharType(req) << endl;
}