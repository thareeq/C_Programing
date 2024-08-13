#include <stdio.h>

int fibonacci(int a){
    if(a<=1){
        return a;
    }
    else{
        return fibonacci(a-1)+fibonacci(a-2);
    }
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    int fib = fibonacci(a);
    printf("NUMBER IS %d",fib);

    return 0;
}