#include <stdio.h>

int main()
{
    int x=5, y=10;
    printf("x:%d, y:%d\n",x,y);
    x=x+y-(y=x);
    printf("x:%d, y:%d\n",x,y);
    return 0;
}