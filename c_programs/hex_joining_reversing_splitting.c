#include <stdio.h>

int main()
{
	// printf("Hello World");
	int a,b;
	char a1=0x11, a2=0x22, a3=0x33, a4=0x44, b1,b2,b3,b4;
	a=a1<<24 | a2<<16 | a3<<8 | a4;
	printf("Joined Hex %x\n",a);
	b=a>>24 | ((a>>8)&0xFF00) | ((a<<8)&0xFF0000) | a<<24;
	printf("REversed Hex %x\n",b);
	b1=b>>24 & 0xff;
	b2=b>>16 & 0xff;
	b3=b>>8 & 0xff;
	b4=b>>0 & 0xff;

	printf("Each byte: 1: %x 2: %x 3: %x 4: %x\n",b1,b2,b3,b4);

    b1=(b&0xff000000)>>24;
	b2=(b&0xff0000)>>16;
	b3=(b&0xff00)>>8;
	b4=b&0xff;

    printf("Each byte: 1: %x 2: %x 3: %x 4: %x",b1,b2,b3,b4);
	return 0;
}
