#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num_str;
    cin >> num_str;//用字符串存储数组就很方便得到每一位数字
    int len=num_str.length();//得到位数，函数实现可以查看string类自带方法
    printf("%d\n", len);//先输出长度
    for (int i = 0; i < len - 1;++i)
    {
        printf("%c ", num_str[i]);//除了最后一位，其他位都是带空格的。
    }
    printf("%c\n", num_str[len - 1]);
    for (int i = len - 1; i >= 0;--i)
    {
        printf("%c", num_str[i]);//倒序输出
    }
        return 0;
}