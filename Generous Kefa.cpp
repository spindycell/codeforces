#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,maks=0;
    map<char,int> arr;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        arr[x]++;
        maks = max(arr[x],maks);
    }
    cout << (maks>m? "NO\n":"YES\n");
}
