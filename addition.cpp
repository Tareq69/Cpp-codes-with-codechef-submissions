#include<iostream>
using namespace std;
int addition(int a,int b){
  return a+b;
}
int main(){
  int x,y;
  cin>>x>>y;
  int sum = addition(x,y);
  cout<<"Sum: "<<sum<<endl;
}
