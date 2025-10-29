#include <stdio.h>

int myfunc(int a, int b){
    printf("%s : Adding %d and %d : Result %d\n",__func__,a,b,a+b);
    return a+b;
}

static int add(int a, int b) __attribute__((alias("myfunc")));

int old_value = 6;

extern int new_value __attribute__((alias("old_value")));

int main(){
    add(3,5);
    myfunc(4,2);
    printf("Old value : %d, New Value : %d\n",old_value,new_value);
    return 0;
}