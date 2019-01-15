#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int ans=0;
    for(int i=0; i<k; i++){
        ans += ((n-1)*2) + ((m-1)*2);
        n-=4,m-=4;
    }
    cout << ans << endl;
}
/*
#include <iostream>
using namespace std;
int main() {
  int w, h, k;
  cin>>w>>h>>k;
  cout<< 2*(h-2*k)*k + 2*(w-2*k)*k + 4*k <<endl;
}
*/
