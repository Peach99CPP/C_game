#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num_str;
    cin >> num_str;//���ַ����洢����ͺܷ���õ�ÿһλ����
    int len=num_str.length();//�õ�λ��������ʵ�ֿ��Բ鿴string���Դ�����
    printf("%d\n", len);//���������
    for (int i = 0; i < len - 1;++i)
    {
        printf("%c ", num_str[i]);//�������һλ������λ���Ǵ��ո�ġ�
    }
    printf("%c\n", num_str[len - 1]);
    for (int i = len - 1; i >= 0;--i)
    {
        printf("%c", num_str[i]);//�������
    }
        return 0;
}