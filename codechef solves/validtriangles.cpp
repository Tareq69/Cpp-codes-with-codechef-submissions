#include<stdio.h>

int main(){

  int t,a,b,c,val;
  scanf("%d",&t);

  while(t--){
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    val = a+b+c;

    if(val==180){
      printf("YES");
      printf("\n");
    }
    else{
      printf("NO");
      printf("\n");
    }
  }

}
