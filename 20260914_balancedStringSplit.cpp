/*
第10题：平衡字符串分割（计数贪心）
描述：给定一个只含 'L' 和 'R' 的字符串，把它分割成尽可能多的平衡子串
（每个子串中 'L' 与 'R' 的数量相等），输出能得到的平衡子串的最大个数。
输入：一行字符串（只含 L 和 R，且两种字符总数相等）。
输出：最大平衡子串个数。
示例：RLRRLLRLRL -> 4 ；另一个：LLLLRRRR -> 1
考察点：用一个计数器维护平衡度——遇到 'L' 加 1、遇到 'R' 减 1，
计数归零时说明从上次归零位置到当前位置构成一个平衡子串。
*/
#include <iostream>
#include <string>
using namespace std;

int balancedStringSplit(string s) {
  int balance = 0, count = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'L') {
      balance++;
    } else {
      balance--;
    }
    if (balance == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  cout << balancedStringSplit("RLRRLLRLRL") << endl;
  cout << balancedStringSplit("LLLLRRRR") << endl;
}
