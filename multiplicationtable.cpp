#include<iostream>
using namespace std;
int main(){
  int i,result,num;
  cout<<"Enter an integer to find its multiplication table upto 10: ";
  cin>>num;
  for(i=1;i<=10;i++){
    result = num*i;
    cout<<"Result is: "<<num<<"X"<<i<<"= "<<result<<endl;
  }
}
