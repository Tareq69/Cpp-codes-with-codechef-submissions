#include<stdio.h>


int main(){
    int t;
    int n,x,y=0,z;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      z = n;
      y = 0;
      while(n!=0){
        x = n%10;
        y = y*10+x;
        n = n/10;
      }
      if(y==z){
        printf("wins");
        printf("\n");
      }
      else{
        printf("loses");
        printf("\n");
      }
    }


}
