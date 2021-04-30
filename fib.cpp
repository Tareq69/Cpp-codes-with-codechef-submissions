#include<stdio.h>

int main(){

  int num1,num2,numn;


  num1 = 1;
  num2 = 1;
  printf("%d\n",num1);
  printf("%d\n",num2);
  for(int i=1;i<=21;i++){
    numn = num1+num2;
    num1 = num2;
    num2 = numn;


    printf("%d\n",numn);
  }


}
