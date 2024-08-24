#include <stdio.h>
#include <netinet/in.h>


int main(){
    int a = 1;
    char *c = (char*)&a;
    //a=htonl(a);
    printf("The Architecture is %s",*c?"Little Endian":"big Endian");
}
