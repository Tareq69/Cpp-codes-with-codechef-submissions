#include<stdio.h>
int main(){
    int t;
    int n,last,first,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
      scanf("%d",&n);
        last = n%10;
        while(n>=10){
          n = n/10;
        }
        first = n;
        sum = first + last;
        printf("%d\n",sum);
    }
  }
