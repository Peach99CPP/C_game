#include <bits/stdc++.h>
using namespace std;
//Ѱ������

int main()
{
    int temp[100],  index = 0;
    int n;
    cin >> n;
    if (n<6 )//�������ó�ǰ���ޡ�������
        return 0;
    for (int i = 6; i <=n;++i)
    {
        index = 0;
        for (int j=1;j<i;++j)
        {
            if(i%j==0)
                temp[index++] = j;//��¼����
        }
        //��¼����������
        //�������ӵĺ�
        int tmp_result = 0;
        for (int p = 0; p < index;++p)
        {
            tmp_result += temp[p];
        }
        if(tmp_result==i ) {//���Ӻͺ���������ȣ����㡰����������
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