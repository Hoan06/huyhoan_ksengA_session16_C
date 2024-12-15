#include <stdio.h>

void showItem(int *x);

int main(){
	
	int array[]={2,4,6,8};
	int *ptr;
	ptr=array;
	showItem(ptr);
	
	
	return 0;
}

showItem(int *x){
	for (int i=0;i<4;i++){
		printf("array[%d] : %d \n",i,x[i]);
	}
}
