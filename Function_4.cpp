#include <iostream>
using namespace std;
void computeCoins(int coinvalue, int& num, int& amountLeft);
//define necessary functions
int input;
int coins;
char ans='y';
int main()
{
  while(ans=='y'||ans=='Y'){
cout<<"Enter a cent amount less than 100:"<<endl;
cin>>input;
if(input>0&&input<100){
  if(input>=25){
  computeCoins(25,coins,input);
    cout<<coins<<" Quarters ";
  }
  if(input>=10){
    computeCoins(10,coins,input);
    cout<<coins<<" Dimes ";
  }
  if(input>=1){
    computeCoins(1,coins,input);
      cout<<coins<<" Pennies ";
    }
  }
  cout<<endl<<"If you would like try again you must enter 'y' or 'Y'"<<endl;
  cin>>ans;
  
}
  //cout<<"If you would like try again you must enter 'y' or 'Y'"<<endl
 // cin>>ans;

return 0;
}
void computeCoins(int coinValue, int& num, int& amountLeft){
  num=amountLeft/coinValue;
  amountLeft=amountLeft%coinValue;
}
//implement functions
