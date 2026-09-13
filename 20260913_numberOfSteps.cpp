/*
第10题：将数字变成 0 的操作次数（循环模拟）
描述：给定一个非负整数 num，反复执行以下操作直到它变成 0：如果是偶数就除以 2，
如果是奇数就减 1。输出总共执行的操作次数。
输入：一个非负整数 num。
输出：操作次数。
示例：14 -> 6
考察点：while 循环与条件判断的组合、循环终止条件的设置，
以及 num 为 0 时次数为 0 的边界情况。
*/
#include <iostream>
using namespace std;

int numberOfSteps(int num) {
  int steps = 0;
  while (num > 0) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num -= 1;
    }
    steps++;
  }
  return steps;
}

int main() {
  cout << numberOfSteps(14) << endl;
  cout << numberOfSteps(0) << endl;
}
