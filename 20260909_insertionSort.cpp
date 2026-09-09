/*
第1题：插入排序（升序）
描述：给定一个长度为 n 的整数数组，使用插入排序将其升序排列。
插入排序的思想是：把数组分为已排序区和未排序区，每次从未排序区取第一个元素
key，在已排序区中从后往前找位置并不断后移比 key 大的元素，直到找到 key 的正确位置。
输入：第一行 n，第二行 n 个整数。
输出：升序排列后的数组（空格隔开）。
示例：5 / 5 2 9 1 6 -> 1 2 5 6 9
考察点：哨兵 key 的保存、while 循环内元素的逐个后移、边界 j >= 0 的判断。
*/
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
  for (int i = 1; i < arr.size(); i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  vector<int> arr = {5, 2, 9, 1, 6};
  insertionSort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
