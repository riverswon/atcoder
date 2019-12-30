/*
key point
sortの方法
sort関数の引数 sort(a, b) -> a番目からb番目までソートされる
*/

#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define vi vector<int>
#define all(c) (c).begin(),(c).end()

int main() {
    int n;
    cin >> n;
    vi d(n);
    rep (i, n){
        cin >> d[i];
    }
    sort(all(d));
    int x;
    x = d[n/2] - d[n/2-1];
    cout << x << endl;

    return 0;
}