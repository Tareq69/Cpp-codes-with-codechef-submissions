#include<stdio.h>


int main(){

    int arr1[5] = {7,4,7,6,7};
    int arr2[5] = {0,1,7,4,6};
    int count0 = 0;
    int count1 = 0;
    int count7 = 0;
    int count4 = 0;
    int count6 = 0;


    for(int i=0;i<5;i++){
      if(arr2[0]==arr1[i]){
        count0++;
      }
    }
    for(int i=0;i<5;i++){
      if(arr2[1]==arr1[i]){
        count1++;
      }
    }
    for(int i=0;i<5;i++){
      if(arr2[2]==arr1[i]){
        count7++;
      }
    }
    for(int i=0;i<5;i++){
      if(arr2[3]==arr1[i]){
        count4++;
      }
    }
    for(int i=0;i<5;i++){
      if(arr2[4]==arr1[i]){
        count6++;
      }
    }
    printf("0 found %d times",count0);
    printf("\n");
    printf("1 found %d times",count1);
      printf("\n");
    printf("7 found %d times",count7);
      printf("\n");
    printf("4 found %d times",count4);
      printf("\n");
    printf("6 found %d times",count6);
      printf("\n");
}
