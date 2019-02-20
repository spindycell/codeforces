#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,x;
    cin >> n;
    map<int,int> a,b;
    for(int i=0; i<n; i++){
        cin >> x;
        a[x]++;
    }
    for(int i=0; i<n; i++){
        cin >> x;
        b[x]++;
    }
    for(int i=0; i<=1000; i++){
        if(a[i]!=b[i] || a[i]>b[i]+b[0]){
            cout << b[0] << endl;
            cout << "No" << endl;
            return 0;
        } else if(a[i]!=b[i] && a[i]<=b[i]+b[0]){
            b[0] -= a[i]-b[i];
        }
    }
    cout << "Yes" << endl;
}
