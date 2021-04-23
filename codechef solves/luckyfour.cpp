#include<stdio.h>
int main(){
  int t,n,count=0,x,y;
  int lck = 4;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
      scanf("%d",&n);
      y = n;
      count = 0;
      while(y!=0){
        x = y%10;
        y = y/10;
        if(lck==x){
          count++;
        }
      }
      printf("%d\n",count);
  }
}
