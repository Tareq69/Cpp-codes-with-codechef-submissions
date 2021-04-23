#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter n to find sum upto nth term: ";
    cin>>num;
    for(i=2;i<=num;i+=2){
      sum = sum + i;
    }
    cout<<"Sum upto nth term is: "<<sum<<endl;
}
