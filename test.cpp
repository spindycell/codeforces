#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pair<char,int> v;
    char x;
    int s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        cin >> s;
        v.make_pair(s,x);
    }
    pair<char,int> > p = v.make_pair('a',1);
    if(std::find(v.begin(), v.end(), p) != v.end()) cout << "yes";
}
