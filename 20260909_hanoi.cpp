/*
第8题：汉诺塔（递归）
描述：有三根柱子 A、B、C，A 柱上从下到上叠着 n 个由大到小的圆盘。
每次只能移动一个圆盘，且大盘不能压在小盘上，目标是把 n 个圆盘从 A 移到 C（可借助 B）。
输出每一步移动动作和总步数。
输入：一个整数 n (1 ≤ n ≤ 10)。
输出：每行一个移动动作，格式为 X -> Y，最后一行输出总步数。
示例：2 ->
A -> B
A -> C
B -> C
总步数：3
考察点：递归分解（先把 n-1 个盘移到辅助柱，再移最大盘，最后移回目标柱）、递归出口 n=1、函数返回值的累加。
*/
#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char aux) {
  if (n == 1) {
    cout << from << " -> " << to << endl;
    return 1;
  }
  int cnt = hanoi(n - 1, from, aux, to);
  cout << from << " -> " << to << endl;
  cnt++;
  cnt += hanoi(n - 1, aux, to, from);
  return cnt;
}

int main() {
  int steps = hanoi(3, 'A', 'C', 'B');
  cout << "总步数：" << steps << endl;
}
