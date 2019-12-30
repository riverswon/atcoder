<https://atcoder.jp/contests/abc125>

## C問題
### 最大公約数の求め方
ユークリッド互除法  
<https://mathtrain.jp/euclid>

```
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
```