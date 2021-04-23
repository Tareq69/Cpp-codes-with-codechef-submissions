#include<iostream>
using namespace std;
int main(){
  int x,y;
  x = 10;
  y = 20 ;
  int *p1, *p2;
  p1 = &x;
  p2 = &y;
  int sum = *p1+*p2;
  cout<<sum<<endl;

}
