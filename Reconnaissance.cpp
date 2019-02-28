#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin >> n >> m;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        for(int j=0; j<i; j++){
            if(abs(arr[i]-arr[j])<=m)ans+=2;
        }
    }
    cout<< ans << endl;
}
