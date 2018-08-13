#include<bits/stdc++.h>
using namespace std;
int s1,s2,s3,s4;
int main(){
    set<int> n;
    cin >> s1 >> s2 >> s3 >> s4;
    n.insert(s1);
    n.insert(s2);
    n.insert(s3);
    n.insert(s4);
    cout << 4-n.size() <<endl;
}
