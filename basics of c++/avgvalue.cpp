#include<iostream>
using namespace std;
 int main() {
    float english;
    float science;
    float maths;
    
    cout<<"enter english marks \n";
    cin>>english;
    cout<<"enter science marks \n";
    cin>>science;
    cout<<"enter maths marks \n";
    cin>>maths;
    float avg = ((english + science + maths) /3 );
    cout<< "Your average value is \n" << avg <<endl;
    return 0;

}