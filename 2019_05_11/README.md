<https://atcoder.jp/contests/diverta2019>

## C問題

stringのチートシート
```
sting s;
s.length() // sの長さをsize_t型で返す
int(s.length()) // int型に変換できる
```

## D問題
### 約数列挙
queue：メモリ効率重視  
vector：速度重視
```
vi divisors(int n){
    vi res;
    for(int i = 0; i <= sqrt(n); i++){
        if(n % i == 0){
            res.push_back(i);
            if(i * i != n){ // 同じ数字が入る可能性を排除
                res.push_back(n/i);
            }
        }
    }
    sort(all(res));
    return res;
}
```