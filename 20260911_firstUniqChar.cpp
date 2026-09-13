/*
第28题：字符串中第一个唯一的字符（哈希计数）
描述：给定一个只含小写字母的字符串，找到它的第一个不重复的字符并返回它的下标；
若不存在这样的字符则返回 -1。
输入：一行字符串（只含小写字母）。
输出：该字符的下标，或 -1。
示例：loveleetcode -> 2 ；另一个：aabb -> -1
考察点：用长度 26 的整型数组当作哈希表统计字频、再按顺序遍历字符串找第一个频次为
1 的位置。
*/
#include <iostream>
#include <vector>

using namespace std;

int firstUniqChar(string str) {
  int count[26] = {0};

  // 第一次遍历：统计频率
  for (char c : str) {
    count[c - 'a']++;
  }

  for (int i = 0; i < (int)str.size(); ++i) {
    if (count[str[i] - 'a'] == 1) {
      return i;
    }
  }
  return -1;
}
int main() {
  int res = firstUniqChar("loveleetcode");
  cout << res << endl;
}