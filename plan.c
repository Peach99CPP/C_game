#include <stdio.h>
#include <stdlib.h>
#define p_lock getchar()
int x = 10, y = 10;
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
void move_mode(void)
{
    scanf("%c", &input_mode);
    switch (input_mode)
    {
    case 's':
        x--;
        break;
    case 'a':
        y--;
        break;
    case 'w':
        x++;
        break;
    case 'd':
        y++;
        break;
    }
    x <= 0 ? x = 0 : x;
    y <= 0 ? y = 0 : y;
}
int main()
{
    //童晶老师的飞机游戏代码
    char input_mode;
    while (1)
    {
        system("cls");
        printf_move(0, x);
        printf_move(1, y);
        printf("  **  \n");
        move_mode();
    }
    p_lock;
    return 0;
}