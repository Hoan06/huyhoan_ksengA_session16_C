#include <stdio.h>

int check();

int main(){
	
	int a=5;
	int b=15;
	int result;
	result=check(&a,&b);
	printf("tong hai so la %d ",result);
	
	
	
	return 0;
}
check(int *x, int *y){
	return *x+*y;
}
