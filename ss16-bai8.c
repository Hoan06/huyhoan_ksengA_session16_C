#include <stdio.h>

void reverseItem(char inputString[],char reverseString[],int size);

int main(){
	
	char inputString[50],reverseString[50];
	printf("moi ban nhap mot chuoi bat ki ");
	fgets(inputString,50,stdin);
	int size;
	size=strlen(inputString);
	reverseItem(inputString,reverseString,size);
	
	return 0;
}

void reverseItem(char inputString[],char reverseString[],int size){
	for (int i=0;i<size;i++){
		reverseString[i]=inputString[size-i-1];
	}
	printf("%s",reverseString);
}
