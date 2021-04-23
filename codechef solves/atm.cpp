#include<iostream>
#include <iomanip>
using namespace std;

int main(){

    int wdraw;
    float balance;
    cin>>wdraw;
    cin>>balance;


    float temp = (wdraw + 0.5);
    float newbalance;

    if((wdraw%5==0)&&(temp<=balance)){
            newbalance = balance - temp;
            cout<<fixed<<setprecision(2)<<newbalance;
    }
    else{
      cout<<fixed<<setprecision(2)<<balance;
    }

}
