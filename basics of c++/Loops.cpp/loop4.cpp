#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Value: " << endl;
    cin >> n;
    
    int sum = 0;
    // Starting at 1 instead of 0
    for(int i = 1; i <= n; i++) {
        sum = sum + i; 
    }
    
    cout << "Your Sum Value: " << sum << endl;
    
    return 0;
}