#include<stdio.h>
#include<cmath>
int main(){
      int t,n,result=1;
      scanf("%d",&t);

      while(t--){
          scanf("%d",&n);
          for(int i=1;i<=n;i++){
            result = result*i;
          }
        printf("%d\n",result);
        result = 1;
      }

}
