#include<stdio.h>
#include<cmath>
int main(){

    int t,n,res;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);

        res = floor(n/2)+1;
        printf("%d\n",res);
    }


}
