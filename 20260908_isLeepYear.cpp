/*
第8题：判断闰年
描述：输入一个年份（正整数），判断其是否为闰年。满足以下任一条件即为闰年：① 能被4整除但不能被100整除；② 能被400整除。
输入：一个整数 year。
输出：true 或 false。
示例：2000 -> true ；1900 -> false ；2024 -> true
考察点：复合逻辑运算符（&& 与 ||）的优先级与组合、条件表达式的严谨书写。
*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    cout << (isLeapYear(2024)) << endl;
}