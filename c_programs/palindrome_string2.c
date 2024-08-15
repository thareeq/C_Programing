#include <stdio.h>
#include <string.h>

void isPalindrome(char* input){
    int low=0, high=strlen(input)-1;
    while(low<high){
        if(input[low]!=input[high]){
            printf("NOT PALINDROME");
            return;
        }
        low++;
        high--;
        
    }
    printf("PALINDROME");
    
}

int main()
{
   char input[50];
   char rev_str[50];
   printf("Enter the string: ");
   scanf("%s",input);
   printf("Input received is %s\n",input);
    int size = strlen(input);

    isPalindrome(input);
    return 0;
}
