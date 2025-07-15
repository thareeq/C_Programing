#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int main(){
    // int (*test)(int,int)=add;
    int result;
    int (*operation)(int,int);
    operation=add;
    result = operation(3,5);
    printf("Result %d\n",result);
    operation=sub;
    result = operation(3,5);
    printf("Result %d\n",result);
    return 0;
}