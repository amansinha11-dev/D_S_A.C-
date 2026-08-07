//string store every characteer in terms of indexes
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "AMAN";
    // find length  last index
    int len = s.size();
    s[len-1] = 's';
    cout << s[len - 1];
    
    return 0;
}
