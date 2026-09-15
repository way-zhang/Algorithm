/*
第7题：计数二进制子串（连续分组）
描述：给定一个只含字符 0 和 1 的字符串，统计其中满足"0 和 1
的数量相同且各自连续出现" 的非空子串的个数（即形如 0011、10、1100 这样的子串）。
输入：一行只含 0 和 1 的字符串。
输出：满足条件的子串个数。
示例：00110011 -> 6
考察点：先把字符串按连续相同的字符分组并记录每段长度（如 00110011 -> 2 2 2 2），
相邻两段长度中的较小值就是这两段能贡献的子串个数，累加所有相邻组合即可。
*/
#include <iostream>
#include <vector>

using namespace std;

int countBinarySubstring(string s) {
  vector<int> arr;
  if (s.size() == 0) {
    return 0;
  }
  char ch = s[0];
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    if (ch == s[i]) {
      count++;
    } else {
      arr.push_back(count);
      ch = s[i];
      count = 1;
    }
  }
  arr.push_back(count);
  int sum = 0;
  for (int i = 0; i < arr.size() - 1; i++) {
    sum += min(arr[i], arr[i + 1]);
  }
  return sum;
}

int main() {
  int res = countBinarySubstring("00110011");
  cout << res << endl;
}