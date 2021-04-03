#include <bits/stdc++.h>
using namespace std;
#define ten_w 100000
int main()
{
    int money, temp, result = 0;
    cin >> money;
    temp = money;
    if (temp >= ten_w)
    {
        result += ten_w * 0.1;
        temp -= ten_w;
    }
    else
    {
        result += temp * 0.1;
        goto result_out;
    }
    //
    if (temp >= ten_w)
    {
        result += ten_w * 0.075;
        temp -= ten_w;
    }
    else
    {
        result += temp * 0.075;
        goto result_out;
    }

    if (temp - 2 * ten_w >= 0)
    {
        result += 2 * ten_w * 0.05;
        temp -= 2 * ten_w;
    }
    else
    {
        result += temp * 0.05;
        goto result_out;
    }

    if(temp-2*ten_w>=0) {
        result += 2 * ten_w * 0.03;
        temp -= 2 * ten_w;
    }
    else{
        result += temp * 0.03;
        goto result_out;
    }

    if(temp-4*ten_w>=0) {
        result += 4 * ten_w * 0.015;
        temp -= 4 * ten_w;
    }
    else {
        result += temp * 0.015;
        goto result_out;
    }
    if(temp>0) 
    {
        result += temp * 0.01;
    }
result_out:
    printf("%d", result);
    return 0;
}