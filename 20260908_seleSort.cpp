/*
第2题：选择排序（升序 + 过程输出）
描述：输入 n
个整数，使用选择排序算法将其按升序排列。每轮选择未排序部分的最小元素，放到已排序部分的末尾，并输出每一轮结束后的数组状态。
输入：第一行 n，第二行 n 个整数。
输出：共 n-1 行，每行为该轮结束后的数组元素（空格隔开）。
示例：4 / 4 3 2 1 ->
1 3 2 4
1 2 3 4
1 2 3 4
考察点：嵌套循环寻找最小值、swap交换、理解“选择”与“冒泡”的过程差异。
*/
#include <iostream>
#include <vector>
using namespace std;

void seleSort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int minI = i;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[minI]) {
        minI = j;
      }
    }
    if (arr[i] > arr[minI]) {
      swap(arr[i], arr[minI]);
    }

    for (int k = 0; k < arr.size(); k++) {
      cout << arr[k] << ' ';
    }
      cout << endl;
  }
}

int main(){
    vector<int> arr={5,4,6,3,7,8,1,2};
    seleSort(arr);
}
