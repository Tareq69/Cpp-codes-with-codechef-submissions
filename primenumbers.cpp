#include<iostream>
using namespace std;
int main(){
  int i,num;
  bool flag;
  cout<<"Enter a number to find if it is prime or not: ";
  cin>>num;
  for(i=2;i<num;i++){
        if(num%i==0){
          flag = false;
          break;
        }
        else
        flag = true;
  }
  cout<<"The given number is prime?: "<<boolalpha<<flag<<endl;
}
