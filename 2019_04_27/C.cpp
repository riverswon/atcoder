#include <bits/stdc++.h>
 
using namespace std;

#define vd vector<double>
 
typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
#define pll pair<ll,ll>
#define X first
#define Y second
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define rrep1(i,n) for(int i=(n);i>0;i--)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define in(x, a, b) (a <= x && x < b)
#define all(c) c.begin(),c.end()
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a = b; return 1; } return 0; }
const ll inf = 1000000001;
const ll INF = (ll)1e18 + 1;
const ll MOD = 1000000007;
//const ll MOD = 998244353;
const double pi = 3.14159265358979323846;
int dx[4] = { -1,0, 1,0 }, dy[4] = { 0,1,0,-1 };
int dx2[8] = { 1,1,0,-1,-1,-1,0,1 }, dy2[8] = { 0,1,1,1,0,-1,-1,-1 };
// #define mp make_pair
//#define endl '\n'

ll gcd(ll a, ll b){
    if(b > a){
        swap(a, b);
    }
    if(b == 0) return a;
    ll r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
 
int main() {
    int n;
    cin >> n;
    vl a(n);
    rep(i,n) cin >> a[i];
    
    vl sum1(n+1), sum2(n+1);
    rep(i,n){
        sum1[i+1] = gcd(sum1[i], a[i]);
    }
    rrep(i,n){
        sum2[i] = gcd(sum2[i+1], a[i]);
    }

    ll ans = 0;
    rep(i,n){
        chmax(ans, gcd(sum1[i], sum2[i+1]));
    }
    cout << ans << endl;
    return 0;
}