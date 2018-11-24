#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,Mishka=0,Chris=0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a>b)Mishka++;
        else if(a<b)Chris++;
    }
    if(Mishka>Chris)cout << "Mishka"<<endl;
    else if(Mishka<Chris)cout << "Chris" <<endl;
    else cout << "Friendship is magic!^^" <<endl;
}
