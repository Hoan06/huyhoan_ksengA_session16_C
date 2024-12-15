#include <stdio.h>

void addItem(int array[],int *size,int index,int n);

int main(){
	int array[50]={1,2,3,4,5};
	int size,index,n;
	size=5;
	for (int i=0;i<size;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
	printf("moi ban nhap vi tri muon them ");
	scanf("%d",&index);
	printf("moi ban nhap gia tri ");
	scanf("%d",&n);
	addItem(array,&size,index,n);
	
	
	return 0;
}
void addItem(int array[],int *size,int index,int n){
	for(int i=*size;i>index;i--){
		array[i]=array[i-1];
	}
	array[index]=n;
	(*size)++;
	for (int i=0;i<*size;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
}
