/*
第6题：水仙花数
描述：水仙花数是指一个三位数，其各位数字的立方和等于它本身，
即满足 a^3 + b^3 + c^3 == abc 的数。输出 100~999 之间的所有水仙花数。
输入：无（固定区间 100~999）。
输出：所有水仙花数（空格隔开）。
示例：-> 153 370 371 407
考察点：循环内取个位/十位/百位（% 与 / 配合）、区间枚举、条件累加输出。
*/
#include <iostream>
using namespace std;

void narcissistic() {
  for (int n = 100; n <= 999; n++) {
    int a = n / 100;      // 百位
    int b = n / 10 % 10;  // 十位
    int c = n % 10;       // 个位
    if (a * a * a + b * b * b + c * c * c == n) {
      cout << n << ' ';
    }
  }
  cout << endl;
}

int main() { narcissistic(); }
