/*
第7题：统计字符串中的元音字母数
描述：输入一行字符串（可包含空格和大小写字母），统计其中元音字母（a, e, i, o,
u，不区分大小写）出现的总次数。 输入：一行字符串（使用getline读取）。
输出：元音个数。
示例：Hello World -> 3 (e, o, o)
考察点：getline用法、tolower转换、字符匹配逻辑。
*/
#include <iostream>
using namespace std;

int cntVowels(string s) {
  int count = 0;
  for (char ch : s) {
    char lower = tolower(ch); // 统一转为小写
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' ||
        lower == 'u') {
      count++;
    }
  }
  return count;
}

int main() {
  int rs = cntVowels("hello word");
  cout << rs << endl;
}