#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,ans=0;
    cin >> n;
    set<int> lis;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x)lis.insert(x);
    }
    cout << lis.size() <<endl;
}
