#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> arr;
    string s,temp,ans;
    int n,maks=0;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++){
        temp = "";
        temp+=s[i];
        temp+=s[i+1];
        arr[temp]+=1;
        if(arr[temp]>maks){
            maks = arr[temp];
            ans = temp;
        }
    }
    cout << ans <<endl;
}
