/*
第2题：最常见的单词（字符串处理+哈希）
描述：给定一段文本（包含字母、空格和标点）以及若干禁用词，找出出现次数最多且不在禁用
列表中的单词。比较时忽略大小写（统一按小写统计），标点符号不计入单词。
输入：第一行为一行文本；第二行为正整数 k；第三行为 k 个禁用词（空格分隔）。
输出：出现次数最多的非禁用单词（小写形式）。
示例：Bob hit a ball, the hit BALL flew far after it was hit. / 1 / hit -> ball
考察点：统一转为小写、以非字母字符为分隔切分单词、哈希表计数、
把禁用词放入集合后计数时跳过它们。
*/
#include <cctype>
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

string mostCommonWord(string paragraph, set<string> banned) {
  map<string, int> counts;
  string word;
  paragraph += ' ';
  for (int i = 0; i < paragraph.size(); i++) {
    char ch = paragraph[i];
    if (isalpha((unsigned char)ch)) {
      word += (char)tolower((unsigned char)ch);
    } else if (!word.empty()) {
      if (banned.count(word) == 0) {
        counts[word]++;
      }
      word.clear();
    }
  }
  string best;
  int bestCount = 0;
  for (map<string, int>::iterator it = counts.begin(); it != counts.end(); it++) {
    if (it->second > bestCount) {
      bestCount = it->second;
      best = it->first;
    }
  }
  return best;
}

int main() {
  string text = "Bob hit a ball, the hit BALL flew far after it was hit.";
  cout << mostCommonWord(text, {"hit"}) << endl;
}
