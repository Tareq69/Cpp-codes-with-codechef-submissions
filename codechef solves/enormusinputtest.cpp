#include<stdio.h>
using namespace std;


int main(){

    int k,n,t;
    scanf("%d",&n);
    scanf("%d",&k);
    int count = 0;
    for(int i=0;i<n;i++){
          scanf("%d",&t);
          if(t%k==0){
              count +=1;
          }
    }

printf("%d",count);
}
