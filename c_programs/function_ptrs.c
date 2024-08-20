#include <stdio.h>

int add(int a, int b){
    printf("In %s %s %d ",__FILE__, __func__, __LINE__);
    return a+b;
}

int sub(int a, int b){
    printf("In %s %s %d ",__FILE__, __func__, __LINE__);
    return a-b;
}

int mul(int a, int b){
    printf("In %s %s %d ",__FILE__, __func__, __LINE__);
    return a*b;
}

int div(int a, int b){
    printf("In %s %s %d ",__FILE__, __func__, __LINE__);
    return a/b;
}


int main()
{
    //int(*func_ptr)(int,int);
    //func_ptr=add;
    //int(*func_ptr)(int,int)=add;
    //int(*func_ptr)(int,int)=&add;
    //int c = func_ptr(3,5);
   // printf("%d",c);
   int(*func_ptr[])(int,int)={add,sub,mul,div};
   for(int i=0;i<4;i++){
       int c=func_ptr[i](10,5);
       printf("And result is : %d\n",c);
       }
    return 0;
}
