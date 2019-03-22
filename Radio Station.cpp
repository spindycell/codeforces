#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    string a,b;
    cin >> n >> m;

    map<string,string> user;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        user[b+';'] = "#"+a;
    }
    for(int i=0; i<m; i++){
        cin >> a >> b;
        cout << a << ' ' << b << ' ' << user[b] << endl;
    }
}
