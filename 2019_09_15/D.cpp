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
    int n, m;
    cin >> n >> m;
    vl a(n);
    rep(i,n){
        cin >> a[i];
    }
    if(n == 1){
        rep(i,m){
            a[0] /= 2;
        }
        cout << a[0] << endl;
        return 0;
    }

    sort(all(a), greater<ll>());
    ll max_index = 0;
    int j = 0;
    rep(i,m){
        if(a[max_index] > a[j]){
            a[max_index] /= 2;
            if(a[max_index] < a[max_index+1]){
                int x = a[max_index];
                a[max_index] = a[max_index+1];
                a[max_index+1] = x;
            }
            else{
                max_index++;
            }
        }
        else{
            a[j] /= 2;
            j++;
        }
    }
    ll result = 0;
    rep(i,n){
        result += a[i];
    }
    cout << result << endl;
    return 0;
}