#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    double a,b,min=5000;
    cin >> n >> m;
    while(n--){
        scanf("%lf%lf",&a,&b);
        if(a/b<min)min=a/b;
    }
    printf("%.8f\n",min*m);
}
