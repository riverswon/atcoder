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
    int n;
    cin >> n;
    int ans = 0;
    int c1 = 0; // 先頭がB、末尾がAである数
    int c2 = 0; // 先頭がB、末尾がAでない数
    int c3 = 0; // 先頭がBでなく、末尾がAである数
    rep(i,n){
        string s;
        cin >> s;
        int s_size = int(s.length());
        rep(j, s_size){
            if(s[j] == 'A' && s[j+1] == 'B'){
                ans++;
            }
        }
        if(s[0] == 'B' && s[s_size - 1] == 'A') c1++;
        else if(s[0] == 'B' && s[s_size - 1] != 'A') c2++;
        else if(s[0] != 'B' && s[s_size - 1] == 'A') c3++;
    }
    if(c1 == 0){
        ans += min(c2, c3);
    }
    else{
        if((c2 + c3) == 0) ans += (c1 - 1);
        else ans+= (c1 + min(c2, c3));
    }
    cout << ans << endl;
    return 0;
}