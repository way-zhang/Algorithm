/*
第1题：唯一的摩尔斯密码词（映射+集合去重）
描述：26 个英文字母各自对应一段摩尔斯密码。给定一个单词数组，把每个单词按字母逐个转换
成摩尔斯密码并直接拼接（字母之间不加分隔），统计一共有多少种不同的密码串。
输入：第一行 n，接下来 n 行每行一个只含小写字母的单词。
输出：不同密码串的种数。
示例：4 / gin / zen / gig / msg -> 2
考察点：字符到密码串的映射表（可用长度 26 的字符串数组）、单词到密码串的拼接，
用 set 完成去重后统计集合大小。
*/
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int uniqueMorseRepresentations(vector<string> words) {
  string morse[26] = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                      "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                      "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                      "...-", ".--",  "-..-", "-.--", "--.."};
  set<string> codes;
  for (int i = 0; i < words.size(); i++) {
    string code;
    for (int j = 0; j < words[i].size(); j++) {
      code += morse[words[i][j] - 'a'];
    }
    codes.insert(code);
  }
  return codes.size();
}

int main() {
  cout << uniqueMorseRepresentations({"gin", "zen", "gig", "msg"}) << endl;
}
