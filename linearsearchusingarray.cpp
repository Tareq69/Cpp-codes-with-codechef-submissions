#include<iostream>
using namespace std;
int main(){
    int arr[30],i,num,key,val;
    int pos = 0;
    cout<<"Enter array elements upto nth term: ";
    cin>>num;
    for(i=0;i<num;i++){
      cin>>arr[i];
    }
    cout<<"Enter the key to find out if it is inside the array: "<<endl;
    cin>>key;
    for(int j=0;j<num;j++){
        if(key==arr[j]){
          pos = j + 1;
          val = key;
          break;
        }
    }
    if(pos==-1){
      cout<<"Not found";
    }
    else{
      cout<<"Key found!!"<<endl;
    cout<<"Key is: "<<val<<" "<< "Position is: "<<pos<<endl;
  }
}
