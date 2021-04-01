#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    double   mile[100], jump[100];
    jump[0] = m;
    mile[1] = 1.5 * m;
    jump[1] = 0.5 * m;
    for (int i = 2; i< 100;++i)
    {
        jump[i] = 0.5 * jump[i - 1];
    }                   
    for (int i = 2; i <= n;++i)
    {
        mile[i] = mile[i - 1] + jump[i] + jump[i - 1];
    }
    printf("%.2lf %.2lf",jump[n], mile[n]);
    return 0;
}