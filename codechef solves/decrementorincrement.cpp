#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0){
      n = n + 1;
    }
    else{
      n = n - 1;
    }
    printf("%d",n);
}
