//banyak magnet menempel yang tidak berurutan
#include<bits/stdc++.h>
using namespace std;

int n,a,x, m = 1;

int main(){
    cin >> n >> a;
    while(--n){
        cin >> x;
        if(x!=a){
            m++;
            a = x;
        }
    }
    cout << m <<endl;
}
