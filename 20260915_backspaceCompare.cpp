/*
第8题：比较含退格的字符串（栈模拟）
描述：字符 '#'
表示退格，会删除它前面的一个字符（若它前面没有字符则什么也不做）。
给定两个字符串 s 和 t（只含小写字母和
'#'），判断它们经过退格处理后得到的字符串是否相同。 输入：两行，分别为 s 和 t。
输出：true 或 false。
示例：ab#c / ad#c -> true ；另一个：a#c / b -> false
考察点：用栈模拟——遇到普通字母入栈，遇到 '#' 且栈非空时弹出栈顶；
进阶可尝试从后往前用双指针并记录待跳过字符个数，避免额外空间。
*/
#include <iostream>

using namespace std;
bool backspaceCompare(string s, string t) {
    int i = s.size() - 1;
    int j = t.size() - 1;
    int skipS = 0, skipT = 0;

    while (i >= 0 || j >= 0) {
        // 在 s 中找到下一个有效字符
        while (i >= 0) {
            if (s[i] == '#') {
                skipS++;
                i--;
            } else if (skipS > 0) {
                skipS--;
                i--;
            } else {
                break;  // 找到有效字符
            }
        }

        // 在 t 中找到下一个有效字符
        while (j >= 0) {
            if (t[j] == '#') {
                skipT++;
                j--;
            } else if (skipT > 0) {
                skipT--;
                j--;
            } else {
                break;  // 找到有效字符
            }
        }

        // 比较有效字符
        if (i >= 0 && j >= 0) {
            if (s[i] != t[j]) {
                return false;
            }
            i--;
            j--;
        } else if (i < 0 && j < 0) {
            // 两个都处理完，成功
            return true;
        } else {
            // 一个还有有效字符，另一个没有
            return false;
        }
    }
    return true;
}

int main() {
  bool res = backspaceCompare("asdf#", "asdf");
  cout << res << endl;
}