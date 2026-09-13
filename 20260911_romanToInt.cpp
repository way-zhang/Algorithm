/*
第23题：罗马数字转整数（字符串映射）
描述：给定一个罗马数字字符串，将其转换为整数。
字符取值：I=1、V=5、X=10、L=50、C=100、D=500、M=1000。
规则：通常数值大的字符在左、小的在右（如 VI=6）；若小数值字符出现在大数值字符左侧，
则表示减法（如 IV=4、IX=9、MCMXCIV=1994）。
输入：一行罗马数字字符串（只含上述字符）。
输出：对应的整数。
示例：MCMXCIV -> 1994
考察点：字符到数值的映射表、从左到右比较相邻字符决定"减"还是"加"、字符串末尾的边界处理。
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(const string& s) {
    unordered_map<char, int> mp = {
        {'I', 1},   {'V', 5},   {'X', 10},
        {'L', 50},  {'C', 100}, {'D', 500},
        {'M', 1000}
    };

    int n = s.size();
    int result = 0;
    for (int i = 0; i < n; ++i) {
        int cur = mp[s[i]];
        // 如果当前字符比右侧字符小，则做减法
        if (i + 1 < n && cur < mp[s[i + 1]]) {
            result -= cur;
        } else {
            result += cur;
        }
    }
    return result;
}

int main() {
    string s="MCMXCIV";
    cout << romanToInt(s) << endl;
    return 0;
}