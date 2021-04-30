#include<stdio.h>

int main(){

  int t,n1,n2,gcd=1,lcm=1;
  scanf("%d",&t);

  while(t--){
      scanf("%d",&n1);
      scanf("%d",&n2);
      int min=(n1<n2) ? n1:n2 ;
      for(int i=1;i<min;i++){
      if((n1%i==0)&&(n2%i==0)){
          gcd = i;
      }
    }
      lcm = (n1*n2)/gcd;

      printf("%d %d\n",gcd,lcm);
  }

}
