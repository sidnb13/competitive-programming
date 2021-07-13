#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

void setIO(string name = "promote") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();

    int b[4];
    int a[4];
    int c[3];
    int i;

    for (i = 0; i < 4; i++)
        cin >> b[i] >> a[i];

    int numPromoted = accumulate(a, a + 4, 0) - accumulate(b, b + 4, 0);

    for (i = 1; i <= 3; i++) {
        numPromoted -= a[i - 1] - b[i - 1];
        c[i - 1] = numPromoted;
    }

    for (i = 0; i < 3; i++)
        cout << c[i] << endl;
}