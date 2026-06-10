// largestNumCheck.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter Your Value of A:" << endl;
    cin >> a;
    
    cout << "Enter Your Value of B:" << endl;
    cin >> b;
    
    cout << "Enter Your Value of C:" << endl;
    cin >> c;
    
    // Fixed: Changed 'C' to 'c' and added the missing '{'
    if (a > b && a > c) {
        cout << "A is the big value" << endl;
    } else if (b > a && b > c) { // Fixed: Changed 'C' to 'c'
        cout << "B is the big value" << endl;
    } else {
        cout << "C is the big value" << endl;
    }
   
    return 0;
}