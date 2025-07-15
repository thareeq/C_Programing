#include <stdio.h>
#include <string.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a*b;
}

int main(){
    int (*operations[4])(int,int);
    operations={add,sub,mul,divide};
    int choice, input1,input2;
    printf("Enter the choice: ");
    scanf("%d",&choice);
    printf("Enter input1: ");
    scanf("%d",&input1);
    printf("Enter input2: ");
    scanf("%d",&input2);
    printf("Result is %d\n",operations[choice](input1,input2));
    return 0;
}