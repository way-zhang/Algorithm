/*
第7题：检查整数及其两倍数是否存在（哈希）
描述：给定一个整数数组，判断是否存在两个不同的下标 i、j，使得 nums[i] == 2 * nums[j]。
输入：第一行 n，第二行 n 个整数。
输出：true 或 false。
示例：4 / 10 2 5 3 -> true ；另一个：3 / 3 1 7 -> false
考察点：用 set / 哈希表记录已经访问过的元素并在其中查找 2 * nums[j]；
特别注意数组中 0 的情况——只有当 0 至少出现两次时才成立。
*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool checkIfExist(vector<int> arr) {
  set<int> seen;
  for (int i = 0; i < arr.size(); i++) {
    if (seen.count(arr[i] * 2) > 0 ||
        (arr[i] % 2 == 0 && seen.count(arr[i] / 2) > 0)) {
      return true;
    }
    seen.insert(arr[i]);
  }
  return false;
}

int main() {
  cout << (checkIfExist({10, 2, 5, 3}) ? "true" : "false") << endl;
  cout << (checkIfExist({3, 1, 7}) ? "true" : "false") << endl;
}
