/*
第17题：有效的括号（栈）
描述：给定一个只包含 '('、')'、'['、']'、'{'、'}' 的字符串，判断括号是否有效：
左括号必须用相同类型的右括号闭合，且必须以正确的顺序闭合。
输入：一行括号字符串。
输出：true 或 false。
示例：()[]{} -> true ；另一个：([)] -> false
考察点：栈的后进先出思想、左括号入栈、右括号与栈顶匹配（类型不符或栈空即非法）、
遍历结束后栈必须为空。
*/
#include <iostream>
#include <stack>
using namespace std;

bool validParentheses(string str) {
  stack<char> s;
  for (char c : str) {
    if (c == '{' || c == '[' || c == '(') {
      s.push(c);
    } else {
      if (s.empty()) {
        return false;
      }
      if ((s.top() == '(' && c == ')') || (s.top() == '{' && c == '}') ||
          (s.top() == '[' && c == ']')) {
        s.pop();
      } else {
        return false;
      }
    }
  }
  return s.empty();
}
int main() {
  bool res = validParentheses("{({[][()]})}");

  cout << res << endl;
}