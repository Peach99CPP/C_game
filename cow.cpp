#include <bits/stdc++.h>
using namespace std;

struct cow_stru
{
    int age;
};
cow_stru cow_group[1000000l + 50];
int num = 1;
void cow_num(int year_num)
{
    if (year_num == 0)
        return;
    for (int i = 0; i < num; i++) //ȫ����ʼ��Ϊ0
    {
        cow_group[i].age = 0;
    }
    num = 1;
    for (int i = 1; i <= year_num; ++i) //ÿһ��Ĵ���
    {
        cow_group[0].age++;
        if (cow_group[0].age > 1)
        {
            num++;
        }
        for (int j = 1; j < num; ++j) //Сĸţ�Ĵ���
        {
            cow_group[j].age++;
            if (cow_group[j].age >= 4)
            {
                num++;
                cow_group[num - 1].age = 1;
            }
        }
    }
    printf("%d\n", num);
}
int main()
{
    int index = 0,years[100];
    while(1)
    {
        cin >> years[index];
        if(years[index]==0)
        {
            break;
        }
        index++;
    }
    for (int i = 0; i < 1000; i++) //ȫ����ʼ��Ϊ0
    {
        cow_group[i].age = 0;
    }
    for (int flag = 0; flag <=index - 1;++flag)
    {
        cow_num(years[flag]);
    }
        return 0;
}