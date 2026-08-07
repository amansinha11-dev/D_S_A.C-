#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cout<<"Enter Your marks :"<<endl;
    cin>>marks;
    if(marks <25) {
        cout<<"You are fail"<<endl;
    } else if(marks < 44) {
        cout<<"your grade is E"<<endl;

    } else if(marks < 49) {
        cout<<"Your Grade is D"<<endl;
    } else if(marks < 59) {
        cout<<"Your Grade is C"<<endl;
    } else if(marks < 79) {
        cout<<"Yore Grade is B"<<endl;

    } else if(marks < 100) {
        cout<<"Your Grade is A";
    }
    return 0;
}