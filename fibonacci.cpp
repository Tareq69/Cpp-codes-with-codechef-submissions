#include<stdio.h>

int main(){

    int prev = 0;
    int current = 1;
    int preprev;
    int temp;
    int n;
    scanf("%d",&n);
    if(n==0){
      temp = 0;
    }
    else if(n==1){
      temp = 1;
    }
    else {
    for(int i=1;i<n;i++){
      preprev = prev;
      prev = current;
      current = preprev + prev;
      temp = current;
    }
}
printf("Nth fibonacci is: %d",temp);

}
