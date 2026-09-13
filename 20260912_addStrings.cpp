/*
第3题：字符串相加（竖式模拟）
描述：给定两个只包含数字的非负整数字符串 num1 和 num2，计算它们的和并以字符串形式返回。
不能使用内置的大整数库，也不能把整个字符串直接转换成整数。
输入：两行，分别为 num1 和 num2。
输出：两数之和（字符串）。
示例：11 / 123 -> 134 ；另一个：0 / 0 -> 0
考察点：从末位开始逐位相加、进位 carry 的传递、两个串长度不等以及最后仍有进位的边界处理。
*/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string addStrings(string num1, string num2) {
  string res;
  int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
  while (i >= 0 || j >= 0 || carry > 0) {
    int sum = carry;
    if (i >= 0) {
      sum += num1[i--] - '0';
    }
    if (j >= 0) {
      sum += num2[j--] - '0';
    }
    res += char(sum % 10 + '0');
    carry = sum / 10;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  cout << addStrings("11", "123") << endl;
  cout << addStrings("0", "0") << endl;
}
