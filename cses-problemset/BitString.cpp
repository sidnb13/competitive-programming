#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    ll n, res, mod = 1000000007;
    cin >> n;

    res = 1;
    while (n--) {
        res *= 2;
        res %= mod;
    }
    cout << res << endl;
}