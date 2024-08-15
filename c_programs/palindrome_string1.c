#include <stdio.h>
#include <string.h>

int main()
{
   char input[50];
   char rev_str[50];
   printf("Enter the string: ");
   scanf("%s",input);
   printf("Input received is %s\n",input);
    int size = strlen(input);

   for(int i=0;i<size;i++){
       rev_str[i]=input[(size-1)-i];
   } 
   printf("Reverse str is %s\n",rev_str);
   
   if (!strcmp(input, rev_str)){
       printf("palidrome");
   }
   else{
       printf("Not palindrome");
   }
    return 0;
}
