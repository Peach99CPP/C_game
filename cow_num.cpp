#include <bits/stdc++.h>
using namespace std;
//Ѱ������

int main()
{
    string nation="China";
    for (int i = 0;i<nation.length();++i)
    {
        nation[i] += 4;
    }
    cout << nation << endl;
    return 0;
}