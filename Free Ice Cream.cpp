#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,x,dis=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        char c;
        cin >> c >> x;
        if(c=='+') m+=x;
        else {
            if(m-x<0) dis++;
            else m-=x;
        }
    }
    cout << m << ' ' << dis << endl;
}
