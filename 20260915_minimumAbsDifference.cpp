/*
第4题：最小绝对差（排序+相邻比较）
描述：给定一个整数数组，找出所有"两元素之差的绝对值等于整个数组最小绝对差"的数对，
并按升序输出这些数对。
输入：第一行 n，第二行 n 个整数。
输出：若干行，每行两个数（小的在前），为所有达到最小绝对差的数对。
示例：4 / 4 2 1 3 ->
1 2
2 3
3 4
考察点：排序后最小绝对差一定出现在相邻元素之间，因此只需一次遍历比较相邻元素；
先求出最小差值，再遍历一次收集所有等于该最小值的相邻数对。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void minimumAbsDifference(vector<int> arr) {
  sort(arr.begin(), arr.end());
  int minDiff = arr[1] - arr[0];
  for (int i = 2; i < arr.size(); i++) {
    minDiff = min(minDiff, arr[i] - arr[i - 1]);
  }
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] - arr[i - 1] == minDiff) {
      cout << arr[i - 1] << ' ' << arr[i] << endl;
    }
  }
}

int main() { minimumAbsDifference({4, 2, 1, 3}); }
