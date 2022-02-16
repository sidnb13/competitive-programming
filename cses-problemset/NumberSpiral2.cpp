#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int t;
    ll mx, diag, y, x, sign;
    cin >> t;

    while(t--) {
        cin >> y >> x;
        mx = max(y,x), sign = mx & 1 ? 1 : -1;
        diag = mx*mx - mx + 1;
        cout << (diag + sign*(x - y)) << "\n";
    }
}
