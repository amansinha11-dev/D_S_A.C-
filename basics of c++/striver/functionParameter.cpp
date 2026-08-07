#include <iostream>
using namespace std;

// Function to calculate the sum using parameters a and b
int sum(int a, int b = 1) {
    int sum = a + b;
    return sum;
}

// Function to calculate the difference using parameters a and b
int sub(int a, int b) {
    int sub = a - b;
    return sub;
}

int main() {
    // Calling the sum function with arguments 2 and 4
    int s1 = sum(2);
    cout << "sum : " << s1 << endl;

    // Calling the sub function with arguments 6 and 3
   // int s2 = sub(6, 3);
    
    // Correctly printing the variable s2
    //cout << "Your difference value is : " << s2 << endl;

    return 0;
}