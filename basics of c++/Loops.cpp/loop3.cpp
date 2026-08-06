//print the values taking values by user
//for loop
#include<iostream>
using namespace std;
int main() {
    int nums;
    cout<<"Enter Your values"<<endl;
    cin >> nums;
    
    for(int i = 0; i<= nums;i++) {
        cout<<"The nums value is "<<i<<endl;
    }
    return 0;
}