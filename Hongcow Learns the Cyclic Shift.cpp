#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
    cin >> s;
    int n = s.length();
    set<string> c;
    for(int i=0; i<n; i++){
        c.insert(s);
        s=s[n-1]+s.substr(0,n-1);
    }
    cout << c.size() <<endl;
}
