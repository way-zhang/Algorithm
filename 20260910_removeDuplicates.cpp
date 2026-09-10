/*
第13题：删除有序数组中的重复项（快慢指针）
描述：给定一个升序排列的整数数组，原地删除重复出现的元素，使每个元素只出现一次，
返回删除后数组的新长度 k，并输出前 k 个元素（保持升序）。不得使用额外数组空间。
输入：第一行 n，第二行 n 个升序整数。
输出：第一行新长度 k，第二行前 k 个元素（空格隔开）。
示例：6 / 1 1 2 2 3 4 ->
4
1 2 3 4
考察点：快慢指针、因为数组有序所以只需与上一个已保留元素比较、避免额外的 set
哈希开销。
*/
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
  int l = 0;
  for (int r = 1; r < arr.size(); r++) {
    if (arr[l] != arr[r]) {
      l++;
      arr[l] = arr[r];
    }
  }
  return l + 1;
}
int main() {
  vector<int> arr = {1, 1, 2, 3, 3, 3, 4};
  int res = removeDuplicates(arr);
  cout << res << endl;
  for (int i = 0; i < res; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}