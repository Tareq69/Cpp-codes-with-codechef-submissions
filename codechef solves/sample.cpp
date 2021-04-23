#include<stdio.h>


int main(){

  int x,y,z;
  int num = 345;
  x = num;
  int temp = num;
    int lastdig = temp%10;
    printf("last number is %d\n",lastdig);
    y = num;
    while(y!=0){
      x = y/10;
      if(x==0)
      break;
      z = x;
      y = z;
    }
    printf("First digit %d",z);




      }
