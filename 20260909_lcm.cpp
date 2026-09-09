/*
第7题：最小公倍数（辗转相除法）
描述：给定两个正整数 a 和 b，求它们的最小公倍数 (LCM)。
性质：lcm(a, b) = a / gcd(a, b) * b，其中 gcd 用辗转相除法（欧几里得算法）求得，
即 gcd(a, b) = gcd(b, a % b)，直到余数为 0。
输入：两个正整数 a 和 b（空格隔开）。
输出：a 和 b 的最小公倍数。
示例：4 6 -> 12
考察点：辗转相除的递归/迭代实现、先除后乘防溢出的顺序。
*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main() { cout << lcm(4, 6) << endl; }
