#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int a = 0x12345678;
    int b = (a/0x1000000)%0x100;
    int c = (a/0x10000)%0x100;
    int sum = b+c;
    printf("0x%x\n",sum);
    
    unsigned char* p = (unsigned char *)&a;
    int sum2 = p[3]+p[2];
    printf("0x%X",sum2);
    
    return 0;
}
