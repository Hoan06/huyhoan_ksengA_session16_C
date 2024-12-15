#include <stdio.h>

int main(){
	
	int a=5;
	int *ptr;
	ptr=&a;
	// cach 1
	printf("gia tri %d \n",a);
	printf("dia chi %d \n",&a);
	// cach 2
	printf("gia tri %d \n",*ptr);
	printf("dia chi %d \n",ptr);
	
	
	
	return 0;
}
