#include <bits/stdc++.h>
using namespace std;
//寻找因子

int main()
{
    int temp[100],  index = 0;
    int n;
    cin >> n;
    if (n<6 )//从样例得出前六无“完数”
        return 0;
    for (int i = 6; i <=n;++i)
    {
        index = 0;
        for (int j=1;j<i;++j)
        {
            if(i%j==0)
                temp[index++] = j;//记录因子
        }
        //记录下所有因子
        //计算因子的和
        int tmp_result = 0;
        for (int p = 0; p < index;++p)
        {
            tmp_result += temp[p];
        }
        if(tmp_result==i ) {//因子和和数本身相等，满足“完数”定义
            printf("%d its factors are ", i);
            for (int q = 0; q < index;++q)
            {
                printf("%d ", temp[q]);
            }
            printf("\n");
        }
    }
        return 0;
}