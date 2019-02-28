#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,row,col,satu=0,dua=0;
    cin >> n >> m;
    string s[105];
    vector<pair<int,int> > arr;
    for(int i=1; i<=n; i++){
        cin >> s[i];
        int temp = 0;
        for(int j=1; j<=m; j++){
            if(s[i][j]=='*') temp++;
        }
        cout << temp <<endl;
        if(temp==1) row = i;
    }
    cout << row << endl;
}
