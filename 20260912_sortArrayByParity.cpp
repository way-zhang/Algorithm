/*
第9题：按奇偶排序数组（双指针原地交换）
描述：给定一个整数数组，把所有偶数移动到数组前面、所有奇数移动到后面，
同类元素之间的相对顺序不作要求。要求原地操作并输出重排后的数组。
输入：第一行 n，第二行 n 个整数。
输出：重排后的数组（空格隔开）。
示例：4 / 3 1 2 4 -> 4 2 1 3（偶数在前、奇数在后，同类元素顺序不限）
考察点：双指针——左指针找奇数、右指针找偶数，找到后交换；不使用额外数组。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void sortArrayByParity(vector<int> &nums) {
  int l = 0, r = nums.size() - 1;
  while (l < r) {
    while (l < r && nums[l] % 2 == 0) {
      l++;
    }
    while (l < r && nums[r] % 2 != 0) {
      r--;
    }
    swap(nums[l], nums[r]);
  }
}

int main() {
  vector<int> nums = {3, 1, 2, 4};
  sortArrayByParity(nums);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << ' ';
  }
  cout << endl;
}
