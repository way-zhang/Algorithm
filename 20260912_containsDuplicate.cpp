/*
第1题：存在重复元素（哈希去重）
描述：给定一个整数数组，判断其中是否存在重复元素。若任一元素至少出现两次则返回 true，
每个元素都不重复则返回 false。
输入：第一行 n，第二行 n 个整数。
输出：true 或 false。
示例：4 / 1 2 3 1 -> true ；另一个：4 / 1 2 3 4 -> false
考察点：哈希表（或 set）边插入边查重、发现重复立即返回；也可排序后比较相邻元素。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> nums) {
  sort(nums.begin(), nums.end());
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1]) {
      return true;
    }
  }
  return false;
}

int main() {
  cout << (containsDuplicate({1, 2, 3, 1}) ? "true" : "false") << endl;
  cout << (containsDuplicate({1, 2, 3, 4}) ? "true" : "false") << endl;
}
