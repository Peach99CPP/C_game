#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define p_lock getchar()
int x = 10, y = 10, target_position = 30, times, scores;
char input_mode;
int isFire, flag;
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
    // scanf("%c", &input_mode);
    input_mode = getch();
    switch (input_mode)
    {
    case 's':
        x++;
        break;
    case 'a':
        y--;
        break;
    case 'w':
        x--;
        break;
    case 'd':
        y++;
        break;
    case ' ':
        isFire = 1;
        break;
    default:
        return;
    }
    //限幅，避免坐标越界
    x <= 0 ? x = 0 : x;
    y <= 0 ? y = 0 : y;
}
void dispaly_(void)
{
    printf("*\n");
    printf_move(1, y - 2);
    printf("*****\n");
    printf_move(1, y - 1);
    printf("***\n");
}
void display_mode(void)
{
    if (!isFire)
    {
        printf_move(0, x);
        printf_move(1, y);
        flag = 0;
    }
    else
    {
        printf("\n");
        for (int i = 0; i < x - 1; ++i)
        {
            printf_move(1, y);
            printf("|\n");
        }
        isFire = 0;
        flag = 1;
        printf_move(1, y);
        times--;
    }
}
void target_display(void)
{
    printf_move(1, target_position);
    printf("+");
}
int iskilled(void)
{
    if (y == target_position && flag)
    {
        target_position = rand() % 30;
        scores++;
        flag = 0;
        return 1;
    }
    return 0;
}
int main()
{
    printf("input the times of the game\n");
    scanf("%d", &times); //开火的次数
    while (times)
    {
        system("cls");
        target_display();
        display_mode();
        dispaly_();
        if (iskilled())  {scores++;
            continue;
        }
        move_mode();
    }
    printf("game over\n scores=%d", scores);
    return 0;
}