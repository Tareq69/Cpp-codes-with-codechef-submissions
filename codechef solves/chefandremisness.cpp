#include<stdio.h>

int main(){

  int t,a,b,max,min;
  scanf("%d",&t);
  while(t--){
      scanf("%d",&a);
      scanf("%d",&b);
      if(a>b){
        min = a;
      }
      else{
        min = b;
      }
      max = a+b;
      printf("%d %d\n",min,max);
  }

}
