#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    // int (*test)(int,int)=add;
    int (*test)(int,int);
    test=add;
    int g = test(3,5);
    printf("Result %d",g);
    return 0;
}