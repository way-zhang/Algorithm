/*
第2题：二进制求和（进位模拟）
描述：给定两个二进制字符串 a 和 b，返回它们的和（同样用二进制字符串表示）。
输入：两行，分别为二进制字符串 a 和 b。
输出：二进制和。
示例：1010 / 1011 -> 10101
考察点：从末位开始逐位相加、逢二进一、两串长度不等以及最后仍有进位的处理。
*/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b) {
  string res;
  int i = a.size() - 1, j = b.size() - 1, carry = 0;
  while (i >= 0 || j >= 0 || carry > 0) {
    int sum = carry;
    if (i >= 0) {
      sum += a[i--] - '0';
    }
    if (j >= 0) {
      sum += b[j--] - '0';
    }
    res += char(sum % 2 + '0');
    carry = sum / 2;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() { cout << addBinary("1010", "1011") << endl; }
