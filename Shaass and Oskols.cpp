#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,le,ri;

int main(){
    cin >> n;
    int arr[n+5];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    cin >> m;
    for(int i=1; i<=m; i++){
        cin >> x >> y;
        ri = arr[x]-y;
        le = arr[x]-(ri+1);
        arr[x-1]+=le;
        arr[x+1]+=ri;
        arr[x]=0;
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << endl;
    }
}
