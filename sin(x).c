#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
float jiecheng(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return x * jiecheng(x - 1);
}
int main()
{

    float x, result = 0;
    int factor = -1;
    printf("input angle_x=?\n\t");//输入的是以角度为单位
    scanf("x=%f", &x);
    x *= PI/180;
    for (int i = 1; i <= 1001; i += 2)
    {
        factor = -factor;
        result += factor * pow(x, i) / jiecheng(i);
    }
    printf("\tresult==\t%.3f\n", result);//保留3位小数

    return 0;
}