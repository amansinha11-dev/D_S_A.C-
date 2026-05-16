#include<iostream>
using namespace std;
int main() {
    float pi = 3.14;
    cout<<(int)pi<<endl; // yaha par pi ka value 3.14 hai but humne usko int me type cast kar diya toh output 3 aayega
    cout<<((float)10/3)<<endl;///explicit type castinhg valuye alwas like 3.15 type

    return 0;
}