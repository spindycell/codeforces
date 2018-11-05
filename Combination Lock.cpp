#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    int n,ans=0,x,y,a,b,c,mins;
    cin >> n;
    cin >> s1 >> s2;
    for(int i=0; i<n; i++){
        if( s1[i]=='0' && (s2[i]=='7'|| s2[i]=='8'|| s2[i]=='9') ){
                if(s1[i]=='0')s1[i]=':';
        }
        if( (s1[i]=='7'||s1[i]=='8'||s1[i]=='9')&& s2[i]=='0'){
                if(s2[i]=='0')s2[i]=':';
        }
        x = int(s1[i])-48;
        y = int(s2[i])-48;
        a = x + (10-y);
        b = y + (10-x);
        c = abs(x-y);
        mins = min(min(a,b),c);
        ans += mins;

        // s+=min((a[i]-b[i]+10)%10,(b[i]-a[i]+10)%10); cara implementation
    }
    cout << ans <<endl;
}
