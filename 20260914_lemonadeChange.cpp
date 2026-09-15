/*
第4题：柠檬水找零（贪心）
描述：每杯柠檬水售价 5 元，顾客按顺序付款，每人只会给 5 元、10 元或 20 元。
你一开始没有任何零钱，必须给每位顾客正确找零，判断能否顺利完成所有交易。
输入：第一行 n，第二行 n 个整数（只能是 5、10、20）。
输出：true 或 false。
示例：5 / 5 5 5 10 20 -> true
考察点：贪心策略——找零时优先使用 10 元而不是两张 5 元（5 元更通用），
分别维护 5 元与 10 元的张数，处理 20 元时的找零组合。
*/
#include <iostream>
#include <vector>
using namespace std;

bool lemonadeChange(vector<int> bills) {
  int five = 0, ten = 0;
  for (int i = 0; i < bills.size(); i++) {
    if (bills[i] == 5) {
      five++;
    } else if (bills[i] == 10) {
      if (five == 0) {
        return false;
      }
      five--;
      ten++;
    } else {
      if (ten > 0 && five > 0) {
        ten--;
        five--;
      } else if (five >= 3) {
        five -= 3;
      } else {
        return false;
      }
    }
  }
  return true;
}

int main() { cout << (lemonadeChange({5, 5, 5, 10, 20}) ? "true" : "false") << endl; }
