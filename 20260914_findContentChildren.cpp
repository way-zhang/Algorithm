/*
第2题：分发饼干（排序+双指针贪心）
描述：每个孩子有一个胃口值 g[i]，每块饼干有一个尺寸 s[j]；只有当 s[j] >= g[i] 时，
这块饼干才能满足该孩子，且每块饼干最多分给一个孩子。求最多能满足多少个孩子。
输入：第一行两个整数 n 和 m，第二行 n 个胃口值，第三行 m 个饼干尺寸。
输出：最多能满足的孩子数。
示例：3 2 / 1 2 3 / 1 1 -> 1
考察点：把胃口和饼干都升序排序，用双指针贪心匹配——用当前最小的能吃饱的饼干去满足
当前最小的胃口，匹配成功则两个指针都前进。
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findContentChildren(vector<int> g, vector<int> s) {
  sort(g.begin(), g.end());
  sort(s.begin(), s.end());
  int i = 0, j = 0;
  while (i < g.size() && j < s.size()) {
    if (s[j] >= g[i]) {
      i++;
    }
    j++;
  }
  return i;
}

int main() { cout << findContentChildren({1, 2, 3}, {1, 1}) << endl; }
