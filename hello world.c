#include <stdio.h>
#define p_lock getchar()
int main()
{
    printf("hello world\n");
    p_lock;
    return 0;
}
