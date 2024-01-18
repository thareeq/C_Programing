#include <stdio.h>

int main()
{
    int x=6, y=4;
    printf("x:%d, y:%d\n",x,y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("x:%d, y:%d\n",x,y);
    return 0;
}