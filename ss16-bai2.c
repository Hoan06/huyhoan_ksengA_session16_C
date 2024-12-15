#include <stdio.h>

void check();

int main(){
	
	int a=5;
	int b=15;
	printf("gia tri a truoc khi doi : %d \n",a);
	printf("gia tri b truoc khi doi : %d \n",b);
	check(&a,&b);
	printf("gia tri a sau khi doi : %d \n",a);
	printf("gia tri b sau khi doi : %d \n",b);
	
	
	
	return 0;
}
check (int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
