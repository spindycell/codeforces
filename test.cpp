#include<iostream>
#include<set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> arr;
    int n,x;
    cin  >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        arr.insert(x);
    }
    for (std::set<int>::iterator it=arr.begin(); it!=arr.end(); ++it){
        std::cout << ' ' << *it;
        std::cout << '\n';
    }

}
