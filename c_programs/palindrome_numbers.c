#include<stdio.h>

int main(){
    int a,b=0,c,d;
    printf("Enter the number: ");
    scanf("%d",&a);
    d=a;
    printf("The number is: %d\n",a);
    while(d>0){
        c=d%10;
        b=(b*10)+c;
        d=d/10;
        //printf("b=%d\n",b);
    }
    printf("Reversed number is %d\n",b);
    if(a==b){
        printf("The number is palindrome");
        
    }
    else{
        printf("The number is not palindrome");
    }
}