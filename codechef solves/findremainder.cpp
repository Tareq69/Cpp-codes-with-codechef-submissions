#include <iostream>
using namespace std;
int main(){

    int t,a,b,rem=0;
    cin>>t;
    for(int i=0;i<t;i++){
      cin>>a;
      cin>>b;
      rem = a % b;
      cout<<rem<<endl;
  }
return 0;
}
