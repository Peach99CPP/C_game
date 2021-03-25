#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int x = 10, y = 10, target_position = 30, times, scores;
char input_mode;
int isFire, flag;
void printf_move(int mode, int movement) //通过printf实现绘制坐标
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
void move_mode(void) //通过按键输入检测进行动作反馈
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
void dispaly_(void) //显示飞机
{
    printf("*\n");
    printf_move(1, y - 2);
    printf("*****\n");
    printf_move(1, y - 1);
    printf("***\n");
}
void display_mode(void) //显示子弹（如果有开火）
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
void target_display(void) //显示击打的目标
{
    printf_move(1, target_position);
    printf("+");
}
int iskilled(void) //判断是否击中(坐标重叠&&开火)
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
void game_over(void)
{
    system("cls");
    printf_move(0, 5);
    printf_move(1, 24);
    printf("game over\n\t\t\tscores=%d\n\a", scores);
}
int main()
{
    srand((unsigned)time(NULL)); //随机数种子
    printf("input the times of the game\n");
    scanf("%d", &times); //开火的次数
    while (times)
    {
        system("cls");
        target_display();
        display_mode();
        dispaly_();
        if (iskilled())
            continue;
        move_mode();
    }
    game_over();
    return 0;
}