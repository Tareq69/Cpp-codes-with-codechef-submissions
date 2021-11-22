
#include <bits/stdc++.h>
using namespace std;
int main(){
      int t;
      int min=0;
      int arr[100];
      scanf("%d",&t);
      for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
        printf("\n");
      }
      for(int i=0;i<t;i++){
        min = arr[0];
          if(arr[0]>arr[i]){
              min = arr[i];
              arr[0]=min;
          }
            printf("%d\n", arr[0]);
}

printf("Minimum element in the array is: %d ",+ min);
}
