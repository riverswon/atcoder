#include <bits/stdc++.h>
 
using namespace std;

#define vd vector<double>
 
typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define vc vector<char>
#define vcc vector< vector<char> >
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
 
int main() {
    int h, w;
    cin >> h >> w;
    vcc a(h, vc(w));
    int leaves = h * w;
    queue<pii> qu;
    rep(i,h){
        rep(j,w){
            char c;
            cin >> c;
            a[i][j] = c;
            if(c == '#'){
                leaves--;
                qu.push(pii(i,j));
            }
        }
    }
    int ans = 0;
    for(ans=0;; ans++){
        if(leaves == 0) break;
        queue<pii> _qu;
        while(!(qu.empty())){
            int i0 = qu.front().first, j0 = qu.front().second;
            qu.pop();
            rep(k,4){
                int ni = i0 + dx[k], nj = j0 + dy[k];
                if(!(in(ni, 0, h)) || !(in(nj, 0, w))) continue;
                if(a[ni][nj] == '#') continue;
                a[ni][nj] = '#';
                _qu.push(pii(ni, nj));
                leaves--;
            }
        }
        qu = _qu;
    }
    cout << ans << endl;
    return 0;
}