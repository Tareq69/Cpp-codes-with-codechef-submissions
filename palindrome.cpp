#include<iostream>
using namespace std;
int main(){
    int num,temp,r,rev=0;
    bool flag;
    cout<<"Enter a Number to find if it's palindrome: ";
    cin>>num;
    temp = num;
    while(temp!=0){
      r = temp%10;
      rev = rev+r;
      temp = temp/10;
    }
  if(num==rev){
    flag = true;
  }
  else{
    flag = false;
  }
  cout<<"Number is palindrome?"<<boolalpha<<flag<<endl;
}
