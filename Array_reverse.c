//Hello,This is array reverse program
#include<stdio.h>
void main(){
	int arr[6]={1,2,3,4,5,6};
	int temp,i;
	for(i=0;i<6/2;i++){
		temp=arr[i];
		arr[i]=arr[6-i-1];
		arr[6-i-1]=temp;
	}
	printf("the reverse array is = ");
	for(i=0;i<6;i++){
		printf("%d",arr[i]);
	}
}
