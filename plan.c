#include <stdio.h>
#include<stdlib.h>
#define p_lock getchar()
void printf_move(int mode, int movement)
{
    if (mode == 0) //x
    {
        for (int i = 0; i < movement; ++i)
            printf("\n");
    }
    else
    {
        for (int j = 0; j < movement; ++j)
            printf(" ");
    }
}
int main()
{
    //童晶老师的飞机游戏代码
    int x = 10, y = 20;
    while (1)
    {
        system("cls");
        printf_move(0, x);
        printf_move(1, y);
        printf("  **  \n");
    }
    p_lock;
    return 0;
}