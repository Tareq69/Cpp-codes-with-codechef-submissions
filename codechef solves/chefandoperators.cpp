#include<stdio.h>

int main(){

    int t,a,b;

    scanf("%d",&t);
    while(t--){
      scanf("%d",&a);
      scanf("%d",&b);

      if(a<b){
        printf("<");
        printf("\n");
      }
      else if(a>b){
        printf(">");
          printf("\n");
      }
      else{
          printf("=");
            printf("\n");
      }
    }

}
