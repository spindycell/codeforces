#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN(a,b) (a>b?b:a)
#define reset(i,n) memset(i, n, sizeof(i))
const ll mod = 1e9 + 7;

#define fi first
#define se second
#define mp make_pair
#define pb push_back

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a/ gcd(a, b)*b; }

int dirx[8] = {-1,0,0,1,-1,-1,1,1};
int diry[8] = {0,1,-1,0,-1,1,-1,1};

inline string IntToString(ll a){
  char x[100];
  sprintf(x,"%lld",a); string s = x;
  return s;
}

inline ll StringToInt(string a){
  char x[100]; ll res;
  strcpy(x,a.c_str()); sscanf(x,"%lld",&res);
  return res;
}

//end of spindyzel template v1.0

int arr[1005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("./a.in","r",stdin);
        freopen("./a.out","w",stdout);
    #endif

    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
      int x;
      cin >> x;
      arr[x]++;
    }
    int* ans;
    ans = std::min_element(arr+1, arr+n+1);
    cout << *ans << endl; 
}


// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄░░░░░░░░░
// ░░░░░░░░▄▀░░░░░░░░░░░░▄░░░░░░░▀▄░░░░░░░
// ░░░░░░░░█░░░░░░░░░░░░▄█▄▄░░▄░░░█░▄▄▄░░░
// ░▄▄▄▄▄░░█░░░░░░▀░░░░▀█░░▀▄░░░░░█▀▀░██░░
// ░██▄▀██▄█░░░▄░░░░░░░██░░░░▀▀▀▀▀░░░░██░░
// ░░▀██▄▀██░░░░░░░░▀░██▀░░░░░░░░░░░░░▀██░
// ░░░░▀████░▀░░░░▄░░░██░░░▄█░░░░▄░▄█░░██░
// ░░░░░░░▀█░░░░▄░░░░░██░░░░▄░░░▄░░▄░░░██░
// ░░░░░░░▄█▄░░░░░░░░░░░▀▄░░▀▀▀▀▀▀▀▀░░▄▀░░
// ░░░░░░█▀▀█████████▀▀▀▀████████████▀░░░░
// ░░░░░░████▀░░███▀░░░░░░▀███░░▀██▀░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

// ░░   ▄▀▀▀▄░░░
// ▄███▀░◐░░░▌░░░░░░░
// ░░░░▌░░░░░▐░░░░░░░
// ░░░░▐░░░░░▐░░░░░░░
// ░░░░▌░░░░░▐▄▄░░░░░
// ░░░░▌░░░░▄▀▒▒▀▀▀▀▄
// ░░░▐░░░░▐▒▒▒▒▒▒▒▒▀▀▄
// ░░░▐░░░░▐▄▒▒▒▒▒▒▒▒▒▒▀▄
// ░░░░▀▄░░░░▀▄▒▒▒▒▒▒▒▒▒▒▀▄
// ░░░░░░▀▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▀▄
// ░░░░░░░░░░░▌▌░▌▌░░░░░
// ░░░░░░░░░░░▌▌░▌▌░░░░░
// ░░░░░░░░░▄▄▌▌▄▌▌░░░░░
