#include<iostream>
using namespace std;
int main(){
      int arr1[30],arr2[30];
      int num;
      cout<<"Enter upto nth term: ";
      cin>>num;
      for(int i=0;i<num;i++){
        cin>>arr1[i];
      }
      cout<<"array 1:";
      for(int l=0;l<num;l++){
        cout<<arr1[l]<<" ";
      }
      cout<<endl;
        for(int j=0;j<num;j++){
            arr2[j] = arr1[j];
        }
        cout<<"array 2:";
        for(int k=0;k<num;k++){
          cout<<arr2[k]<<" ";
        }

    }
