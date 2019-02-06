#include<bits/stdc++.h>
using namespace std;

int n,m,lis[105];

int main(){
    cin >> n >> m;
    int arr[n];
    vector<int> solve;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(lis[arr[i]]==0)
            solve.push_back(i+1);
        lis[arr[i]]++;
    }
    if(solve.size()>=m){
        cout << "YES" << endl;
        for(int i=0; i<m; i++){
            cout << solve[i] << ' ';
        }
        cout <<endl;
    } else
        cout << "NO" <<endl;
}
