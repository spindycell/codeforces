#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin >> n >> m;
    int temp=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m*2; j++){
            int x;
            cin >> x;
            if(j%2==0 && x>temp){
                ans++;
            }
            if(j%2==1){
                if(x==1)ans++;
                temp=x;
            }
        }
    }
    cout << ans << endl;
}
