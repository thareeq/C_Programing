#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter the char : ");
    putchar('\n');
    a=getchar();
    //scanf("%c",&a);
    if(islower(a))
    {
        putchar(toupper(a));
    }
    else
    {
        putchar(toupper(a));
    }
    return 0;
}
