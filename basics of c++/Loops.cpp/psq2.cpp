#include<iostream>
using namespace std;
int main () {
    int n = 10829;
    int sum = 0;
    while(n > 0) {
      //  cout<<n<<" ";
       int sum1 = n % 10;
        cout<<sum1<<" ";//  sum += sum1;
        n= n/10;
      
    }
    cout<<endl;
   // cout<<"Sum = "<<sum<<endl;
    return 0;
}