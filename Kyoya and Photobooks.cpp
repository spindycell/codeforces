#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = s.length();
    cout << ((ans+1)*26)-ans << endl;
}
