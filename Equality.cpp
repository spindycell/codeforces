#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=INT_MAX;
    cin >> n >> m;
    map<char,int> arr;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        arr[s[i]]++;
    }
    for(auto i:arr)
        ans = min(ans,i.second);

    if(arr.size()<m)cout << 0 <<endl;
    else cout << m*ans <<endl;
}
