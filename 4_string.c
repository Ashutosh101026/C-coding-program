// some command of string
#include<stdio.h>
#include<string.h>
int main(){
  char st[]="Abcd";
  printf("%d\n",strlen(st));// print number of character in string excluding null character
  char target[30];
  strcpy(target,st);//copy the string from source(st) to target string
  printf("%s\n%s",st,target);
  return 0;
}
