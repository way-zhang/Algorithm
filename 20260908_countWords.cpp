/*
第10题：统计字符串中的单词数
描述：输入一行字符串（仅包含英文字母和单个空格，且不以空格开头或结尾），统计其中包含的单词个数（单词之间由空格分隔）。
输入：一行字符串（使用 getline 读取）。
输出：单词个数。
示例：Hello World C++ -> 3
考察点：getline 的用法、stringstream
的便捷分词（或手动遍历空格计数+1）。推荐使用 stringstream 感受输入流的灵活性。
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(const string &str) {
  stringstream ss(str);
  string word;
  int count = 0;
  while (ss >> word) {
    count++;
  }
  return count;
}

int main() {
  string line;
  getline(cin, line);
  cout << countWords(line) << endl;
  return 0;
}