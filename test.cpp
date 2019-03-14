#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d,r,ans=0;
        cin >> n >> d >> r;

        vector<int> morning,afternoon;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            morning.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            afternoon.push_back(x);
        }

        sort(morning.begin(),morning.end());
        sort(afternoon.begin(),afternoon.end());
        for(int i=0; i<n; i++){
            int temp;
            temp = d-morning[i];
            auto it = upper_bound(afternoon.begin(),afternoon.end(),temp);
            int wow = it-afternoon.begin()-i;
            cout << temp << ' ';
            cout << wow << endl;
        }
    }
}
