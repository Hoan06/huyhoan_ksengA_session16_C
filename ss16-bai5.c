#include <stdio.h>

void showItem(int *x,int index,int index1);

int main(){
	
	int array[]={2,4,6,8};
	int index,index1;
	for (int i=0;i<4;i++){
		printf("array[%d] : %d \n",i,array[i]);
	}
	int *ptr;
	ptr=array;
	printf("moi ban nhap vi tri ");
	scanf("%d",&index);
	printf("moi ban nhap gia tri ");
	scanf("%d",&index1);
	showItem(ptr,index,index1);
	
	
	return 0;
}

void showItem(int *x,int index,int index1){
	x[index]=index1;
	for (int i=0;i<4;i++){
		printf("array[%d] : %d \n",i,x[i]);
	}
}
