#include <iostream>
#include <iomanip> // 1. Include this library for formatting

using namespace std;

int main() {
    int income;
    // 2. Minor bug fix: Initialize tax to 0. Otherwise, if income is <= 5, 
    // it will print a random garbage value at the end!    ....
    float tax = 0; 
    
    cout << "Enter Your Income (in lakh)" << endl;
    cin >> income;
    
    if (income <= 5) {
        cout << "No Tax" << endl;
    } else if (income <= 10) {
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }
    
    // 3. Add 'fixed' and 'setprecision(0)' before printing the final number
    if (income > 5) {
        cout << "Tax = " << fixed << setprecision(0) << (tax * 100000) << endl;
    }
    
    return 0;
}