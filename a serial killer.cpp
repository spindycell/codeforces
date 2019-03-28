#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,alive,s,s1;
    int n;
    cin >> a >> b;
    cin >> n;
    cout << a << ' ' << b << endl;
    for(int i=0; i<n; i++){
        cin >> s >> s1;
        if(s==a) a = s1;
        else b = s1;
        cout << a << ' ' << b <<endl;
    }
}
