#include<stdio.h>

int main(){

    int t,counte=0,counto=0;
    int arr[1000];
    scanf("%d",&t);
    int size = t;
    for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
          counte++;
        }
        else {
          counto++;
        }
      }
        if(counte>counto){
          printf("READY FOR BATTLE");
        }
        else
        printf("NOT READY");
    }
