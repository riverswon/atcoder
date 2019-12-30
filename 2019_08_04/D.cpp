#include <bits/stdc++.h>
 
using namespace std;
 
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
    string s;
    cin >> s;
    int n = int(s.length());
    vi result(n);

    int flag1 = 0;
    int flag2 = 0;
    int x;
    rep(i,n-1){
        if(s[i]=='R' && s[i+1]=='L'){
            result[i]++;
            result[i+1]++;
            result[i] += int(floor(float(i - flag2)/2));
            result[i+1] += int(ceil(float(i - flag2)/2));
            flag1 = i;
        }
        else if(s[i]=='L' && s[i+1]=='R'){
            result[flag1] += int(ceil(float(i - (flag1+1))/2));
            result[flag1+1] += int(floor(float(i - (flag1+1))/2));
            flag2 = i+1;
        }
        else if(i == (n-2)){
            result[flag1] += int(ceil(float(i - flag1)/2));
            result[flag1+1] += int(floor(float(i - flag1)/2));
        }
    }
    rep(i,n-1){
        cout << result[i] << ' ';
    }
    cout << result[n-1] << endl;
    return 0;
}