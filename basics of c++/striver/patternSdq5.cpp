#include<bits/stdc++.h>
using namespace std;
/*main(){

    int n;
    cout<<"enter"<<endl;
    cin>>n;
    for(int i= 1; i<=n; i++){
        cout<<"*";
        for(int j =1;j<=n-1;j++){
            if(i==1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
          
            }
            
    }
    cout<<"*"<<endl;
}
return 0;
}*/
int main(){
    int n;
    cin>>n;
   for(int i = 1; i<=n; i++){
    //space
    for(int j = 1; j<=n;j++){
        cout<<" ";
    }//star
    for(int j=1; j<i;j++){
        cout<<i;
    }
    cout<<endl;
   }
   return 0;
}
