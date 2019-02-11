#include<bits/stdc++.h>
using namespace std;

int n,x;
bool isi[1001];

int main(){
    cin >> n;
    vector<int> ans,b(n+1);
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=n-1; i>=0; i--){
        if(!isi[b[i]]){
            ans.push_back(b[i]);
            isi[b[i]]=true;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() <<endl;
    for(auto i:ans)
        cout << i << ' ';
}
