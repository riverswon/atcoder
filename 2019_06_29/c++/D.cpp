/*
key point
nCr mod p の計算
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)

const ll MOD = 1000000007;

const int MAX=2000;
ll fact[MAX], fact_inv[MAX]; // fact -> n!を格納 fact_inv -> (n!)^{-1}を格納

// 繰り返し二乗法
//a^nをO(logn)で求められる
ll power(ll a, ll b){
	ll res=1;
	while(b > 0){
		if(b & 1) res = res * a % MOD; // b & 1 -> 論理積
		a = a * a % MOD;
		b>>=1; // 1bit 右シフト
	}
	return res;
}

// n! (n!)^{-1} の計算
// 全ての計算をO(n + log(p))で求められる
void factorial(int n){
    fact[0] = 1;
    rep(i, n) fact[i+1] = fact[i] * (i+1) % MOD;
	fact_inv[n] = power(fact[n], MOD-2);
    rrep(i, n) fact_inv[i] = fact_inv[i+1] * (i+1) % MOD;
}

// nCr mod p の計算
ll comb(ll n, ll r){
	return (fact[n] * fact_inv[r]) % MOD * fact_inv[n-r] % MOD;
}

int main() {
    int n, k;
    cin >> n >> k;

    factorial(n);

    vl d(k+1);
    rep1 (i, k+1){
        if(i > n-k+1){
            d[i] = 0;
        }
        else{
            d[i] = comb(n-k+1, i);
            d[i] = (d[i] * comb(k-1, i-1)) % MOD;
        }
    }
    rep1 (i, k+1){
        cout << d[i] << endl;
    }
    return 0;
}