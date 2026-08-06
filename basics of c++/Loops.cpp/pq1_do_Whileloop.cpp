#include<iostream>
using namespace std;
int main() {
    int nums;
    do{
     cout<<"Enter Your number"<<endl;
     cin >> nums;
     if(nums % 10 == 0) {
        break;//here breaking multiple of 10 using break;     }
     cout<<"Your neterd number"<<nums<<endl;
    }while(true);
    return 0;
    }
}    