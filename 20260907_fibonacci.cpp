/*
第6题：斐波那契数列（第n项）
描述：斐波那契数列定义为 F(1)=1, F(2)=1, F(n)=F(n-1)+F(n-2)。输入 n，输出第 n
项的值（禁止使用递归，必须用迭代法，防止栈溢出）。 输入：一个整数 n (1 ≤ n ≤
50)。 输出：第n项的值。 示例：6 -> 8
考察点：动态规划基础（滚动数组）、循环递推。
*/

#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  int prev2 = 1; // F(1)
  int prev1 = 1; // F(2)
  int curr;

  for (int i = 3; i <= n; ++i) {
    curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
  }
  return curr;
}
int main() {
  int res = fibonacci(10);
  cout << res << endl;
}
