
#include <stdio.h>
#include <string.h>

// 65(0x41) to 90(0x5A) Capital letters and 97(0x61) to 122(0x7A) small lettere difference 32
void conert_to_upper(char s[]){
    for(int i=0;i<strlen(s);i++)
    {
        
        if (s[i]>=97)
            s[i]=s[i]-32;
            
    }
}
void conert_to_lower(char *s){
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<65) continue;
        if (s[i]<97)
            s[i]=s[i]+32;
    }
}
int main()
{
    char input[50];
    int upper_lower_flag;
    printf("Enter the string:");
    //scanf("%s",input);
    //gets(input);
    //fgets(input, 50, stdin);
    scanf("%[^\n]%*c", input);
    printf("press 0 for upper 1 for lower:");
    scanf("%d",&upper_lower_flag);
    if(upper_lower_flag==1){
        printf("Converting to lower\n");
        conert_to_lower(input);
    }
    else
    {
        printf("Coert to upper\n");
        conert_to_upper(input);
    }
    printf("OUTPUT is %s",input);
    return 0;
}
