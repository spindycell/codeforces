#include<bits/stdc++.h>
using namespace std;

int n,a,b,c,idx;

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(idx==3)idx=0;

        if(idx==0) a+=x;
        else if(idx==1) b+=x;
        else c+=x;
        idx++;
    }
    cout << (a>b ? (a>c? "chest":"back") : (b>c? "biceps":"back")) <<endl;
}
