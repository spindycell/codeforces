#include<bits/stdc++.h>
using namespace std;

bool rated,unrated;
int n,a,b,mins=5000;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(a!=b) rated=true;
        else {
            if(a<=mins) mins = a;
            else unrated = true;
        }
    }
    if(rated) cout << "rated\n";
    else if(unrated) cout << "unrated\n";
    else cout << "maybe\n";

}
