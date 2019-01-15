#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m;
    vector<pair<int,int> > ans;
    int arr[n],sc[m];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<m; i++){
        cin >> x;
        for(int j=0; j<n; j++){
            if(arr[j]==x){
                ans.push_back(make_pair(j,x));
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i].second << ' ';
    }

}
