/*
第10题：哥德巴赫猜想验证（质数枚举）
描述：哥德巴赫猜想指出，任一大于 2 的偶数都可以写成两个质数之和。
给定一个大于 2 的偶数 n，输出一对质数 a、b 使 a + b = n；若有多组解，
输出 a 最小的那一组（约定 a <= b）。
输入：一个大于 2 的偶数 n。
输出：两个质数 a 和 b（空格隔开）。
示例：10 -> 3 7
考察点：质数判断函数（试除到平方根）、a 从小到大枚举并判断 n - a 是否为质数、
循环的提前结束。
*/
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void goldbach(int n) {
  for (int a = 2; a <= n / 2; a++) {
    if (isPrime(a) && isPrime(n - a)) {
      cout << a << ' ' << n - a << endl;
      return;
    }
  }
}

int main() { goldbach(10); }
