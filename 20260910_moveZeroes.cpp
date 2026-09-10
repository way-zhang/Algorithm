/*
第11题：移动零（双指针）
描述：给定一个整数数组 nums，将数组中所有 0 移动到数组末尾，同时保持非零元素的
相对顺序。要求原地操作，不得使用额外的数组。
输入：第一行 n，第二行 n 个整数。
输出：移动后的数组（空格隔开）。
示例：5 / 0 1 0 3 12 -> 1 3 12 0 0
考察点：快慢指针（slow 指向下一个待放置非零元素的位置，fast
依次遍历）、原地交换。
*/
#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &arr) {
  int l = 0;
  for (int r = 0; r < arr.size(); r++) {
    if ( arr[r] != 0) {
      swap(arr[r], arr[l]);
      l++;
    }
  }
}

int main() {
  vector<int> arr = {1, 2, 0, 1, 3, 0,7};
  moveZeroes(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}