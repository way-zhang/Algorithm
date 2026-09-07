
#include <iostream>

using namespace std;
/*
第3题：反转字符串（原地）
描述：输入一个字符串（仅包含小写字母），将其原地反转后输出（不允许使用reverse库函数）。
输入：一行字符串。
输出：反转后的字符串。
示例：hello -> olleh
考察点：双指针（begin与end交换）、string的引用传参或下标访问。
*/

void reverse(string s) {
  string resString = "";
  for (int i = s.size() - 1; i >= 0; i--) {
    resString += s[i];
  }
  cout << resString << endl;
}
int main() { reverse("hello"); }