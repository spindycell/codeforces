#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v;
    cin >> n >> v;
    int now = 0,ans = 0;
    for(int i=1; i<=n; i++){
        if((now)<(n-i)){
            if((n-i)<= (v-now)){
                ans+= i*(n-i);
                now += n-i;
            }
            else {
                ans+= i*(v-now);
                now += v-now;
            }
        }
        now--;
    }
    cout << ans <<endl;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, v;
	cin >> n >> v;
	cout<<( n>v? ((n-v)*(n-v+1))/2 + (v-1) : n-1);
}
*/
