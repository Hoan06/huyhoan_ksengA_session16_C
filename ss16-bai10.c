#include <stdio.h>

void addItem(int array[],int *size,int index);

int main(){
	int array[50]={1,2,3,4,5};
	int size,index;
	size=5;
	for (int i=0;i<size;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
	printf("moi ban nhap vi tri muon xoa ");
	scanf("%d",&index);
	addItem(array,&size,index);
	
	
	return 0;
}
void addItem(int array[],int *size,int index){
	for(int i=index;i<*size;i++){
		array[i]=array[i+1];
	}
	(*size)--;
	for (int i=0;i<*size;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
}
