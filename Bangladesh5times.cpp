#include<iostream>
using namespace std;
int main(){
    int i,num;
    string str;
    cout<<"Enter the number of time you want to print your text: ";
    cin>>num;
    cin.ignore();
    cout<<"Enter your desired text: ";
    getline(cin, str);
    for(i=0;i<num;i++){
          cout<<str<<endl;
    }
}
