#include <stdio.h>

int main(){
	int a = 7;
	int index=4;
	
	//Change index 4th bit to 1
	//0000 0111 : 7 to 0000 1111 : 15
	
	int b = (1<<(index-1))|a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);
	
	//No changes for already 1
	// a=7 will be 7
	index=3;
	b = (1<<(index-1))|a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);


	//Change bit it 0 3rd bit
	//0000 0111 : 7 to 0000 0011:3
	index=3;
	b = ~(1<<(index-1))&a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);	

	index=4;
	b = ~(1<<(index-1))&a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);

	//Toggle a bit
	index=4;
	b = (1<<(index-1))^a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);

	index=3;
	b = (1<<(index-1))^a; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);

	//Read a particular bit value
	index=3;
	b = ((1<<(index-1))&a)>>index-1; 
	printf("Changed Number is %d\n",b);
	printf("Changed Number is 0x%02x\n",b);

}