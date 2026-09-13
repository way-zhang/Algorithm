/*
第2题：买卖股票的最佳时机（一次遍历）
描述：给定一个数组 prices，prices[i] 表示某支股票第 i 天的价格。你只能选择某一天买入，
并在之后的某一天卖出，求能获得的最大利润；若无法获利则返回 0。
输入：第一行 n，第二行 n 个整数。
输出：最大利润。
示例：6 / 7 1 5 3 6 4 -> 5
考察点：一次遍历维护"历史最低价"，用当前价格减去最低价来更新最大利润；
对比暴力双重循环枚举买卖日的做法。
*/
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices) {
  int minPrice = prices[0];
  int profit = 0;
  for (int i = 1; i < prices.size(); i++) {
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    } else if (prices[i] - minPrice > profit) {
      profit = prices[i] - minPrice;
    }
  }
  return profit;
}

int main() { cout << maxProfit({7, 1, 5, 3, 6, 4}) << endl; }
