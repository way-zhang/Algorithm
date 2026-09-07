/*
第8题：冒泡排序（升序）
描述：输入 n
个整数，使用冒泡排序算法将其按升序排列，并输出每一轮排序后的数组状态（帮助理解过程）。
输入：第一行n，第二行n个整数。
输出：共 n-1 行，每行为一轮结束后的数组元素（空格隔开）。
示例：4 / 4 3 2 1 ->
3 2 1 4
2 1 3 4
1 2 3 4
考察点：嵌套循环、交换swap、数组遍历输出。
*/

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> nums) {
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      int tmp = 0;
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
      }
      for (int k = 0; k < n; k++) {
        cout << nums[k] << ' ' ;
      }
       cout << endl ;
    }
  }
}
int main(){
    bubbleSort({4,3,6,7,5,1,2});
}