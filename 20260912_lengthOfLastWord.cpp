/*
第4题：最后一个单词的长度（倒序扫描）
描述：给定一个由字母和空格组成的字符串，返回其中最后一个单词的长度
（单词指不含空格的连续字符）。
输入：一行字符串（可能包含首尾空格或连续空格）。
输出：最后一个单词的长度。
示例：Hello World -> 5
考察点：从字符串末尾倒序扫描——先跳过尾部空格，再统计字符个数直到遇到空格或到达串首；
可与正向逐段分割的写法对比。
*/
#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
  int i = s.size() - 1;
  int len = 0;
  while (i >= 0 && s[i] == ' ') {
    i--;
  }
  while (i >= 0 && s[i] != ' ') {
    len++;
    i--;
  }
  return len;
}

int main() { cout << lengthOfLastWord("Hello World") << endl; }
