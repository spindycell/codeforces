//versi xor
#include <bits/stdc++.h>
using namespace std;
int a,b,c,x;
int tengah(int a,int b, int c){
    if (a>b ^ a>c){ //operator xor jika salah satu benar ^
        return abs(a-b)+abs(a-c);
    } else if(b>a ^ b>c){
        return abs(b-a)+abs(b-c);
    } else {
        return abs(c-a)+abs(c-b);
    }
}
int main(){
    cin >> a >> b >> c;
    cout << tengah(a,b,c) << endl;
}

/* versi vektor
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    scanf("%d%d%d",&x1,&x2,&x3);
    vector<int> out;

    out.push_back(x1);
    out.push_back(x2);
    out.push_back(x3);

    sort(out.begin(),out.end());


    cout << out[1]-out[0]+out[2]-out[1] <<endl;
}
*/
