/*
第9题：回文数判断（整数）
描述：输入一个整数（可能为负数），判断其是否为回文数（即正读和倒读一样）。注意：负数直接返回false；不允许将整数转为字符串（必须用数学方法反转数字）。
输入：一个整数。
输出：true 或 false。
示例：121 -> true ; -121 -> false ; 10 -> false
考察点：整数取余（% 10）和除法（/ 10）、反转溢出处理（用long
long存反转值或提前判断）。
*/
#include <iostream>

using namespace std;

bool isPalindrome(int n) {
  if (n < 0) {
    return false;
  }
  if (n >= 0 && n < 10) {
    return true;
  }
  long long rev = 0;
  int r = n;
  while (n != 0) {
    int tmp = n % 10;
    rev = rev * 10 + tmp;
    n = n / 10;
  }
  return (rev == r);
}
int main() {
  bool b = isPalindrome(123211);
  cout << b << endl;
}