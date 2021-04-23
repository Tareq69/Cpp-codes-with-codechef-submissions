#include<iostream>
using namespace std;

int main(){
      int t,n;
      cin>>t;
      int  fact = 1;
      for(int i=1;i<=t;i++){
              cin>>n;
              while(n!=0){
                fact = fact * n ;
              }
              cout<<fact<<endl;
      }

}
