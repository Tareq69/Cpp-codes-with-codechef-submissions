#include <stdio.h>

int main(){

    int t,n1,n2,n3,result,x,y,z;
    scanf("%d",&t);
    int max;
    while(t--){
        scanf("%d",&n1);
        scanf("%d",&n2);
        scanf("%d",&n3);
        if(n1>n2&&n1>n3){
          max = n1;
        }
        else if(n2>n1&&n2>n3){
          max = n2;
        }
        else
        max = n3;

        x = max - n1;
        y = max - n2;
        z = max - n3;

        if(x==0){
          if(y<z){
            result = n2;
          }
          else
          result = n3;
        }
        if(y==0){
          if(x<z){
            result = n1;
          }
          else
          result = n3;
        }

        if(z==0){
          if(x<y){
            result = n1;
          }
          else
          result = n2;
        }
        printf("%d\n",result);
    }



}
