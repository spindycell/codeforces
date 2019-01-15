#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    map<string,string> arr;
    arr.insert(make_pair("green","Time"));
    arr.insert(make_pair("yellow","Mind"));
    arr.insert(make_pair("orange","Soul"));
    arr.insert(make_pair("purple","Power"));
    arr.insert(make_pair("red","Reality"));
    arr.insert(make_pair("blue","Space"));
    for(int i=0; i<n; i++){
        cin >> s;
        arr.erase(s);
    }
    cout << arr.size() << endl;
    for(auto i:arr)cout<<i.second<<endl; //tidak perlu it iterator
}
