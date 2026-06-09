#include<iostream>
using namespace std;
 int main() {
    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;
    if (age >= 18) {
        cout <<"You Can vote"<<endl;
    } if(age >=25) {cout<<"You Can Participate election"<<endl;}
      else {
        cout<<"You are Minor You Cannot Vote"<<endl;
    }
 return 0; }
 ////mulrtiple timess if use kar shakta hai But else only 1 time wo bhi last meh 