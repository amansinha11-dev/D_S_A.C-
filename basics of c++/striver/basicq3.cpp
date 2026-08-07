#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout<<"Enter Your Age for job"<<endl;
    cin >> age;
    if (age <18) {
        cout<<"Enter you Age"<<endl;
        if(age < 15) {
            cout<<"You Are Child"<<endl;
        }
    } else if(age <= 57) {
        cout<<"Congrast You are Eligible";
        if(age > 55) {//nested if
            cout<<" but Retirement soon";
        }
       return 0;
    }
}