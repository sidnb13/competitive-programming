#include <bits/stdc++.h>
using namespace std;

#define NAME "paint"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a <= c && b >= c) && (a <= d && b >= d)) {
        cout << b-a << endl;
    } else if (c <=a && b <= d) {
        cout << d-c << endl;
    } else if (a <= c && b >= c) {
        cout << d-a << endl;
    } else if (a <= d && b >= d) {
        cout << b-c << endl;
    } else {
        cout << d-c + b-a << endl;
    }
}