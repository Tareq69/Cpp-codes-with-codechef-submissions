#include<iostream>
using namespace std;
int main(){
    int i,num,fac=1;
    cout<<"Enter an integer to find it's factorial: ";
    cin>>num;
    for(i=1;i<=num;i++){
      fac = fac*i;
    }
    cout<<"Factorial is: "<<fac<<endl;
}
