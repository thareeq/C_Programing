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

typedef struct{
    char *op_name;
    int (*operation)(int,int);
}operations;

int main(){
    // int (*test)(int,int)=add;
    operations ops[]={
        {"add", add},
        {"sub", sub},
        {"mul", mul},
        {"divide", divide}
    };
    int result, input1, input2;
    char choice[10];
    int (*func)(int,int);
    
    printf("Enter the choice: ");
    scanf("%s",choice);
    printf("Enter input1 ");
    scanf("%d", &input1);
    printf("Enter input2 ");
    scanf("%d", &input2);
    for(int i=0;i<4;i++){
        if(strcmp(choice,ops[i].op_name)==0){
            func=ops[i].operation;
            result=func(input1,input2);
            printf("Result %d\n",result);
        }
    }
    return 0;
}