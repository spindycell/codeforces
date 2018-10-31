#include<bits/stdc++.h>
using namespace std;
int n,m,num,sum;
int main(){
    cin >> n >> m;
    while(n--){
        cin >> num;
        if(num>m){
            sum+=2;
        } else {
            sum++;
        }
    }
    cout << sum <<endl;
}
