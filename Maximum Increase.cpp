#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,x,push,ans,last=-1;

int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x>last)
            push++;
        else
            push=1;
        ans = max(ans,push);
        last = x;
    }
    printf("%d\n",ans);
}
