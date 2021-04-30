#include<iostream>
#include<stdio.h>
using namespace std;
#include<string>
int main(){
  char x;
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
      cin>>x;
      if(x=='B'||x=='b'){
        printf("BattleShip");
        printf("\n");
      }
      else if(x=='C'||x=='c'){
        printf("Cruiser");
        printf("\n");
      }
      else if(x=='D'||x=='d'){
        printf("Destroyer");
        printf("\n");
      }
      else if((x=='F'||x=='f')){
        printf("Frigate");
        printf("\n");
      }
  }

}
