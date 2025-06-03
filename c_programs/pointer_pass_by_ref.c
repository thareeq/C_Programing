#include <stdio.h>
 
void func(int **ptr){
    static int b = 56;
    *ptr = &b;
}
 
int main()
{
    int a = 20;
    int *p = &a;
    func(&p);
    printf("VALUE is %d\n",*p);
}
