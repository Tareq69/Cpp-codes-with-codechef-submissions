#include<stdio.h>

int main(){
  int t,n;
  int count;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    if(n==1){
      count = 1;
    }
  else if(n==2){
      count = 0;
    }
    for(int i=2;i<n;i++){
      if(n%i==0){
        count = 1;
        break;
      }
      else{
        count = 0;
      }
    }
    if(count==0){
      printf("yes");
      printf("\n");
    }
    else{
      printf("no");
      printf("\n");
    }
}
}
