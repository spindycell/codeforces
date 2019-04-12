#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,minX=9,minY=9;
    cin >> n >> m;
    map<int,int> arr,arr1;
    for(int i=0; i<n; i++){
        cin >> x;
        minX = min(x,minX);
        arr[x]++;
    }
    for(int i=0; i<m; i++){
        cin >> x;
        minY = min(x,minY);
        arr[x]++;
    }
    for(int i=1; i<=9; i++){
        if(arr[i]>=2){
            cout << i << endl;
            return 0;
        }
    }
    if(minX<minY)
        cout << minX<<minY << endl;
    else
        cout << minY<<minX << endl;
}
