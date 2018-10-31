#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=0;
    string n;
    cin >> n;
    int x = n.length();
    while(x--){
        i+=(n[x]=='4'||n[x]=='7');
    }
    cout << ((i==4||i==7)?"YES":"NO") << endl;
}
