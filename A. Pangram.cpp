#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    set<char> huruf;
    char c;
    cin >> n;
    while(n--){
        cin >> c;
        c=tolower(c);
        huruf.insert(c);
    }
    cout << (huruf.size()==26? "YES":"NO");
}
