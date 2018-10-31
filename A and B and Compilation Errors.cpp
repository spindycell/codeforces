#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0; i<3; i++){
        arr[i] = 0;
        for(int j=0; j<n; j++){
            cin >> m;
            arr[i] += m;
        }
        n--;
    }
    cout << arr[0] - arr[1] << endl << arr[1]-arr[2] <<endl;
}
