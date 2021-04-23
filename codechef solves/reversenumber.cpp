#include<stdio.h>
int main(){
  int t,y,z,x,n,reverse = 0;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    x = n;
    reverse = 0;
    while(x!=0){
      y = x%10;
      reverse = reverse*10+y;
      x = x/10;
    }
    printf("%d\n",reverse);
  }
}
