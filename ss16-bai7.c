#include <stdio.h>

void arrangeItem(int *ptr,int size);

int main(){
	int array[]={2,5,1,4,7,3,6};
	int size=sizeof(array)/sizeof(int);
	arrangeItem(array,size);
	
	return 0;
}

void arrangeItem(int *ptr,int size){
	for (int i=0;i<size-1;i++){
		for (int j=0;j<size-i-1;j++){
			if(*(ptr+j)>*(ptr+j+1)){
				int temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
	for (int i=0;i<size;i++){
		printf("array[%d] : %d \n",i,*(ptr+i));
	}
}
