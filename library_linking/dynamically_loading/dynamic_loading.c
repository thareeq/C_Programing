#include <stdlib.h>
#include <stdio.h>
#include "dlfcn.h"

int main(){
	void *handle = NULL;
	double(*cosine)(double) = NULL;
	char *error = NULL;
	printf("TEXT");
	handle = dlopen("C:\\Windows\\System32\\msvcrt.dll",RTLD_LAZY);
	if(!handle){
		fputs(dlerror(),stderr);
		exit(1);
	}
	dlerror();
	cosine = dlsym(handle,"cos");
	if((error = dlerror()) != NULL){
		fputs(error, stderr);
		exit(1);
	}
	printf ("Test %f\n",(*cosine)(2.0));
	dlclose(handle);
	return 0;
}