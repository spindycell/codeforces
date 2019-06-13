#include<bits/stdc++.h>
using namespace std;

template<typename A, typename B>
std::pair<B,A> flip_pair(const std::pair<A,B> &p){
    return std::pair<B,A>(p.second, p.first);
}

template<typename A, typename B>
std::multimap<B,A> flip_map(const std::map<A,B> &src){
    std::multimap<B,A> dst;
    std::transform(src.begin(), src.end(), std::inserter(dst, dst.begin()),
                   flip_pair<A,B>);
    return dst;
}

int main(){
    string f,m,s,ans;
    map<string,int> arr;
    cin >> f >> m >> s;
    arr[f]++;
    arr[m]++;
    arr[s]++;
    if(arr.size()==2){
        bool ok = false;
        string a,b;
        int j = 0;
        multimap<int,string> dst = flip_map(arr);
        for(auto i:dst){
            if(j==0)a=i.second;
            else b=i.second;
            if(i.first==1)
                ans = i.second;
            j++;
        }
        if( (a=="paper" && b=="rock") ||
            (a=="rock" && b=="scissors") ||
            (a=="scissors" && b=="paper")
           ){
            if(ans == f)cout << "F\n";
            else if(ans == m)cout << "M\n";
            else if(ans == s)cout << "S\n";
        } else
            cout << "?\n";
        return 0;
    }
    cout << "?\n";
    return 0;
}

