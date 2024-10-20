//input/output in 2d array and sum of column total in 2D array....
#include<stdio.h>
int main(){
 int arr[3][3];
 int i,j;
 for( i=0;i<3;i++){
  for(j=0;j<3;j++){
    scanf("%d",&arr[i][j]);
  }
 }
 printf("the initial array is =");
 for( i=0;i<3;i++){
  for( j=0;j<3;j++){
    printf("%d\t",arr[i][j]);
  }
  printf("\n");
 }
 int sum =0;
for( i=0;i<3;i++){
  for(j=0;j<3;j++){
  
    sum=sum+arr[j][i];
  }
  printf("sum of column total  %d\t = %d\n",i+1,sum);
  sum =0;
 }

 
  return 0;
}
