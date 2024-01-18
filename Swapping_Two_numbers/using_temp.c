#include <stdio.h>

int main()
{
    int x=10, y=15, temp;
    printf("x:%d, y:%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("x:%d, y:%d\n",x,y);
    return 0;
}