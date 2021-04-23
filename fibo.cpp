#include<iostream>
using namespace std;
int main(){
  int arr[30],i,num;
  cout<<"Enter the nth term upto which you want to see fibonacci numbers: ";
  cin>>num;
  arr[0]=0;
  arr[1]=1;
  for(i=2;i<num;i++){
      arr[i]= arr[i-1]+arr[i-2];
  }
  for(int j=0;j<num;j++){
     cout<<arr[j]<<endl;
  }
}
