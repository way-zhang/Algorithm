/*
第21题：多数元素（频次统计）
描述：给定一个大小为 n 的整数数组，找出其中出现次数严格大于 n/2 的元素。
题目保证这样的元素一定存在。
输入：第一行 n，第二行 n 个整数。
输出：该多数元素。
示例：7 / 3 2 3 3 1 3 3 -> 3
考察点：用数组或哈希表统计频次；也可排序后直接取中间下标的元素（多数元素排序后必在中间），
进阶可了解摩尔投票的抵消思想。
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> count;
    int n = nums.size();
    for (int x : nums) {
        if (++count[x] > n / 2) {
            return x;  
        }
    }
    return -1;  
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cout << majorityElement(nums) << endl;
    return 0;
}