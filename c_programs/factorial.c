#include <stdio.h>

int main()
{
    int fact=1, n;
    printf("Enter the number to find the factorial of: ");
    scanf("%d",&n);
    //for(int i=1;i<=n;i++)
    //{
    //    fact=fact*i;
    //}
    while(n)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial is %d\n",fact);
    return 0;
}