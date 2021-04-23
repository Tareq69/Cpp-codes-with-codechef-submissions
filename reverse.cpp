#include<iostream>
using namespace std;
int main(){
    int num,temp,r,rev=0;
    cout<<"Enter a Number to find it's rev: ";
    cin>>num;
    temp = num;
    while(temp!=0){
      r = temp%10;
      rev = rev+r;
      temp = temp/10;
    }
    cout<<"Reverse of digit is: "<<rev<<endl;
}
