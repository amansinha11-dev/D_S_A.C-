#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums;
    cout<<"Enter your Number"<<endl;
    cin>>nums;
    switch(nums) {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
         cout<<"Thrusday"<<endl;
          break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"Satuarday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"invalid"<<endl;

    }
    cout << "Check "<<endl;
    return 0;
}