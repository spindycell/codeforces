#include<bits/stdc++.h>
using namespace std;
int k,r,i=1;
int main(){
    cin >> k >> r;
    int temp = k;
    while(k%10!=0 && (k%10)-r!=0 ){
        i++;
        k = temp * i;
    }
    cout << i <<endl;
}
