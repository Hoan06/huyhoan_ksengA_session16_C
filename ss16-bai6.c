#include <stdio.h>

void checkItem(int *ptr,int index1);

int main(){
	
	int array[]={1,2,3,4,5,6,7};
	int index;
	printf("moi ban nhap gia tri can tim ");
	scanf("%d",&index);
	checkItem(array,index);
	
	return 0;
}

void checkItem(int *ptr,int index1){
	for (int i=0;i<7;i++){
		if (*(ptr+i)==index1){
			printf("gia tri %d o vi tri %d ",index1,i);
		}
	}
}
