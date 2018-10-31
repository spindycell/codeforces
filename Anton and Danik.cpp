#include<bits/stdc++.h>
using namespace std;
int n,i,j;
char c;
int main(){
    cin >> n;
    while(n--){
        cin >> c;
        (c=='A'?i++:j++);
    }
    if(i>j)puts("Anton");
    else puts(i<j?"Danik":"Friendship");
    cout << endl;
}

