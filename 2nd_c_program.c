// 2nd c program 
// pattern printing

#include<stdio.h>
int main(){
	int i,j,n,num;
num=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){ 
	for(j=1;j<=i;j++){
		
		printf("%d\t",num);
		num++;
	}
	printf("\n");
	}
	return 0;
}
