//CalculatorUsingSwitchStatment.cpp
#include<iostream>
using namespace std;
int main() {
  int a,b;
  char op;
  cout<<"Enter valueof A" <<endl;
  cin >> a;
  cout<<"Enter valueof B "  <<endl;
  cin >> b;
  cout<<"Enter Your operator (+, -,  8,/,)"<<endl;
 
  cin >> op;
  switch(op) {
  
    case '+' : cout <<"your + " << (a+b) << endl;
         break;
    case '/': cout <<"your + " << (a/b)<<endl;
         break;
    case '*':cout <<"your * "<< (a * b) << endl;
         break;
    case '-': cout <<"your-" << (a-b)<<endl;
         break;
    default: cout <<"invalid"<<endl;
        break;

  }
  return 0;
}