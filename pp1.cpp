#include<iostream>
using namespace std;

int main()
{
int arr[]={5,2,8,9,12,3};
int even=0,odd=0;

int length=sizeof(arr)/sizeof(int);
for(int i=0; i<length; i++){
if(arr[i]%2==1){
odd+=arr[i];
}
else{
even+=arr[i];
}
}

cout<<odd<<" "<<even<<endl;
}
