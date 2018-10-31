#include<bits/stdc++.h>
using namespace std;
int n,cek;
string s;
bool fishy = false;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> s;
        if(s[0]!='m'){
            stringstream geek(s);
            geek >> cek;
            if(cek!=i)fishy=true;
        }
    }
    if(fishy) cout << "something is fishy\n";
    else cout << "makes sense\n";
}
