#include<iostream>
using namespace std;
int main(){
    int y,z;
    int x;
    cin>>x;
    int  temp = x;
    int sum = 0;
    while(temp!=0){
          y = temp%10;
          z = temp/10;
          temp = z;


          sum = sum + y;
    }
        cout<<sum<<endl;

}
