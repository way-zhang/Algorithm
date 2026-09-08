/*
第4题：求各位数字之和（数字根初版）
描述：输入一个正整数 n，计算其所有位上的数字之和（只计算一次，例如 1234
的结果就是 1+2+3+4 = 10，无需再相加到个位数）。 输入：一个整数 n（n ≥ 0）。
输出：各位数字之和。
示例：1234 -> 10 ；505 -> 10
考察点：while 循环配合 % 10（取余）和 / 10（整除）提取每一位。
*/
#include <iostream>
using namespace std;
int numSum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int res = numSum(12345678);
  cout << res << endl;
}