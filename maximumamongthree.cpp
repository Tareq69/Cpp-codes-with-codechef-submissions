#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int max;
    if(x>y&&x>z){
      max = x;
    }
    else if(y>x&&y>z){
      max = y;
    }
    else{
      max = z;
    }
    cout<<"Maximum is: "<<max<<endl;
}
