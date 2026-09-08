/*
第7题：计算阶乘 n!（迭代法）
描述：输入一个非负整数 n (0 ≤ n ≤ 20)，计算 n! 并输出。注意数学定义：0! = 1。由于结果可能较大，请使用 long long 类型存储。
输入：一个整数 n。
输出：阶乘结果。
示例：5 -> 120 ；0 -> 1
考察点：long long 的取值范围（可容纳 20!）、循环累积、特殊值 n=0 的边界处理。
*/
#include<iostream>

using namespace std;

long long factorial(int n){
    long long res=1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

int main(){
    long long res=factorial(10);
    cout<<res<<endl;
}
