#include<iostream>
using namespace std;
int main(){
    int num,temp,r,sum=0;
    cout<<"Enter a Number to find it's sum of digit: ";
    cin>>num;
    temp = num;
    while(temp!=0){
      r = temp%10;
      sum = sum+r;
      temp = temp/10;
    }
    cout<<"Sum of digit is: "<<sum<<endl;
}
