#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"Enter a year to find out whether it is a leap year or not: ";
  cin>>year;
  if((year%400==0)||(year%100!=0)&&(year%4==0)){
    cout<<"This year is a leap year"<<endl;
  }
  else
    cout<<"This year is not a leap year";
}
