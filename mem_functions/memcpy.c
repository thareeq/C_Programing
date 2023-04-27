//Memcopy function
#include <stdio.h>
#include <string.h>

int main(){
    char dest[10];
    char source[6]="hello";
    memcpy(dest,source,sizeof(source));
    printf("Source : %s, Dest %s",source,dest);
    return 0;
}