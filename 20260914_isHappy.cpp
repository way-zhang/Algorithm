/*
第1题：快乐数（集合查重）
描述：快乐数的定义：对一个正整数，每次把它替换为各位数字的平方和，重复这个过程；
若最终能得到 1，则它是快乐数；若陷入不包含 1 的循环，则不是。给定 n，判断它是否为快乐数。
输入：一个正整数 n。
输出：true 或 false。
示例：19 -> true ；另一个：2 -> false
考察点：数位拆解求各位平方和、用 set 记录出现过的数来检测循环、循环终止条件的设置。
*/
#include <iostream>
#include <set>
using namespace std;

bool isHappy(int n) {
  set<int> seen;
  while (n != 1 && seen.count(n) == 0) {
    seen.insert(n);
    int sum = 0;
    while (n > 0) {
      int d = n % 10;
      sum += d * d;
      n /= 10;
    }
    n = sum;
  }
  return n == 1;
}

int main() {
  cout << (isHappy(19) ? "true" : "false") << endl;
  cout << (isHappy(2) ? "true" : "false") << endl;
}
