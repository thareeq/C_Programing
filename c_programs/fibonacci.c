#include <stdio.h>

int main()
{
    int input;
    printf("Enter the number : ");
    scanf("%d",&input);
    int a=0,b=1;
    if(input==1)
    {
        printf("%d",a);
    }
    if(input>=2)
    {
        printf("%d %d ",a,b);
    }
    while(input>=3)
    {
        int c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
        input--;
    }
    return 0;
}
