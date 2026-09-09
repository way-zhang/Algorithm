/*
第2题：十进制转二进制（除2取余法）
描述：给定一个非负整数 n，将其转换为二进制表示并输出（不输出前导 0）。
转换方法：不断用 n 除以 2 并记录余数，直到 n 为 0，最后把所有余数倒序输出即可。
输入：一个非负整数 n。
输出：n 的二进制字符串。
示例：10 -> 1010
考察点：除2取余 + 结果逆序、do-while 保证 n=0 时也能输出 0。
*/
#include <iostream>
#include <vector>
using namespace std;

void decToBin(int n) {
  vector<int> bits;
  do {
    bits.push_back(n % 2);
    n /= 2;
  } while (n > 0);
  for (int i = bits.size() - 1; i >= 0; i--) {
    cout << bits[i];
  }
  cout << endl;
}

int main() {
  decToBin(10);
  decToBin(0);
}
