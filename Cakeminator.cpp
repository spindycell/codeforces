#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c,ansR=0,ansC=0,ans=0;
    cin >> r >> c;
    string row(c,'.');
    string s[r+5];
    for(int i=0; i<r; i++){
        cin >> s[i];
        if(s[i]==row)
            ansR++;
    }
    for(int i=0; i<c; i++){
        bool ok = true;
        for(int j=0; j<r; j++){
            if(s[j][i]=='S'){
                ok = false;
                break;
            }
        }
        if(ok)ansC++;
    }
    //cout << ansR << ' ' << ansC << endl;
    ans = (ansR*c)+(ansC*r)-(ansR*ansC);
    printf("%d\n",ans);
}
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
  int R, C;
  set<int> r, c;
  char l;
  cin>>R>>C;
  for (int i=0; i<R; i++)
    for (int j=0; j<C; j++) {
      cin>>l;
      if (l =='S') r.insert(i), c.insert(j);
    }

  cout<<R*C - (r.size()*c.size());
}
*/
