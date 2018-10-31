#include<bits/stdc++.h>
using namespace std;

int n,x,y,m;
int main(){
    vector<int> guy;
    cin >> n;
    cin >> x;
    while(x--){
        cin >> m;
        guy.push_back(m);
    }
    cin >> y;
    while(y--){
        cin >> m;
        guy.push_back(m);
    }
    sort(guy.begin(),guy.end());
    guy.erase(unique(guy.begin(),guy.end()),guy.end());
    cout << (guy.size() == n ? "I become the guy." : "Oh, my keyboard!");
}
