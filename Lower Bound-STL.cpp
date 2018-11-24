#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v;
    vector<int>::iterator low;
    int n,m,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        bool ok = binary_search(v.begin(),v.end(),x);
        if(ok) cout << "Yes ";
        else cout << "No ";
        low=std::lower_bound (v.begin(), v.end(), x);
        cout << (low- v.begin())+1 <<endl;
    }
  return 0;
}
