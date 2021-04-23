#include<stdio.h>
int main(){
       int t,n,x,z;
       scanf("%d",&t);
       int sum = 0;
       int temp;
       for(int i=0;i<t;i++){
            sum = 0;
            scanf("%d",&n);
            temp = n;
            while(temp!=0){
              x = temp%10;
              z = temp/10;
              temp = z;
              sum = sum + x;
            }
            printf("%d\n",sum);

       }

}
