#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
  int mark;
  cout<<"Enter the mark you obtained: ";
  cin>>mark;
  if(mark<0||mark>100){
    cout<<"Invalid mark"<<endl;
    exit(0);
  }
  if(mark!=0){
   if(mark>=93){
      cout<<"Obtained grade: "<<"A"<<endl;
    }
    else if(mark>=89){
      cout<<"Obtained grade: "<<"A-"<<endl;
    }
    else if(mark>=88){
      cout<<"Obtained grade: "<<"B+"<<endl;
    }
    else if(mark>=83){
      cout<<"Obtained grade: "<<"B"<<endl;
    }
    else if(mark>=80){
      cout<<"Obtained grade: "<<"B-"<<endl;
    }
    else if(mark>=77){
      cout<<"Obtained grade: "<<"C+"<<endl;
    }
    else if(mark>=74){
      cout<<"Obtained grade: "<<"C"<<endl;
    }
    else if(mark>=71){
      cout<<"Obtained grade: "<<"C-"<<endl;
    }
    else if(mark>=68){
      cout<<"Obtained grade: "<<"D+"<<endl;
    }
    else if(mark>=64){
      cout<<"Obtained grade: "<<"D"<<endl;
    }
    else if(mark>=60){
      cout<<"Obtained grade: "<<"D-"<<endl;
    }
      else{
        cout<<"Obtained grade: "<<"F"<<endl;
      }
    }
  }
