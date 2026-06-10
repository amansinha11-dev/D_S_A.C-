#include<iostream>
using namespace std;
 int main(){
    int marks ;
    cout<<"enteryour maks"<<endl;
    cin >> marks;
    if(marks >= 90) {
        cout << "A" <<endl;
    }else if(marks >=80) {
        cout<< "B" <<endl;
    }else if(marks >= 70) {
        cout <<"C"<<endl;
    } else {
        cout <<"D"<<endl;
    }
    return 0;
 }