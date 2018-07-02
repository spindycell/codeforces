#include<iostream>
using namespace std;

int main(){
    int n,b,sum=0;
    cin>>n;
    n=n*3;
    for(int i=0; i<n; i++){
        cin>>b;
        if(n%3==0){
            sum=sum+b;
            n--;
        }
    }
    if(sum==0){
        cout<<"YES";
    }
    else cout<<"NO";

return 0;
}
