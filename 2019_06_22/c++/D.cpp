/*
key point
二段階ソート vector<pair<oo, oo>> を使う
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vpii vector<pair<int, int>>
#define mp(a,b) make_pair((a),(b)) // pairを作成
#define all(c) (c).begin(),(c).end()
#define X first
#define Y second
#define rep(i,n) for(int i=0;i<(n);i++)


int main() {
    int n, a, b;
    cin >> n;
    vpii p(n);

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p[i] = mp(b, -a);
    }
    sort(all(p)); // pairのfirst, secondの順でソートされる
    for(int i = 0; i < n; i++){
        p[i].Y = p[i].Y * (-1);
    }
    ll sum = 0;
    rep(i, n) {
        sum = sum + p[i].Y;
        if(sum > p[i].X){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}