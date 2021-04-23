#include<iostream>
using namespace std;
int main(){
  int num,sum=0,max;
  cout<<"Enter the number of students: "<<endl;
  cin>>num;
  int marks[num];
  max = marks[0];
  for(int i=0;i<num;i++){
    cin>>marks[i];
    sum = sum + marks[i];
    }

  int avg = sum/num;
  cout<<"Sum of the marks are: "<<sum<<endl;
  cout<<"Average of the marks are: "<<avg<<endl;
  for(int k=1;k<num;k++){
    if(max<marks[k]){
      max = marks[k];
    }
  }
  cout<<"Maximum among the marks are: "<<max<<endl;
}
