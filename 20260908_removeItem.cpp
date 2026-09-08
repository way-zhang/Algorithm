/*
第6题：移除元素（原地快慢指针）
描述：给定一个整数数组 nums 和一个值 val，原地移除所有数值等于 val
的元素，并返回移除后数组的新长度。要求不能使用额外的数组空间，元素的顺序可以改变。
输入：第一行两个整数 n 和 val，第二行 n 个整数。
输出：第一行输出新长度 k，第二行输出数组前 k 个元素（空格隔开）。
示例：5 3 / 3 2 2 3 4 ->
3
2 2 4
考察点：快慢指针（fast 遍历，slow 指向待填充位置）、原地覆盖思想。
*/
#include <iostream>
#include <vector>
using namespace std;

int removeItem(vector<int> &nums, int val) {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == val) {
      nums.erase(nums.begin()+i);
    }
  }

  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<' ';
  }
  cout<<endl;
  return nums.size();
}
int main(){
    vector<int> nums={1,2,3,4,5,2,3,4};
    
    int res=removeItem(nums,3);
cout<<res<<endl;
}