//while loop
#include<iostream>
using namespace std;
int main() {
    int n = 12345;
    int res = 0;
    while(n > 0) {
        int lastdigi = n % 10;
        res = res * 10 + lastdigi;
        n /= 10;
    }
    cout<<"reverse = "<<res<<endl;\
    return 0;
}