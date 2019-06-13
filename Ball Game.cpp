#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> sum;
    int n,ans=2,temp=2;
    cin >> n;
    while(sum.size()<n-1){
        if(ans%n==0)cout << n << ' ';
        else cout << ans%n << ' ';
        sum.insert(ans);
        ans+=temp;
        temp++;
    }
    cout << endl;
}
