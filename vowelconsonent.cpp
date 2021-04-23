#include<iostream>
using namespace std;
int main(){
  char chr ;
  cin>>chr;
  if((chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u')||((chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')))
  {
    cout<<"Given character is a vowel";
  }
  else{
    cout<<"Given character is a consonent";
  }
}
