#include <bits/stdc++.h>
using namespace std;

#define NAME "mixmilk"

struct bucket {int n,m;};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    bucket b1,b2,b3;
    cin >> b1.m >> b1.n >> b2.m >> b2.n >> b3.m >> b3.n;

    bucket b[3] = {b1,b2,b3};
    int nxt, prv, amt;

    for (int i = 0; i < 100; i++) {
        nxt = (i+1)%3; prv = i%3;
        amt = min(b[prv].n, b[nxt].m - b[nxt].n);
        b[nxt].n += amt;
        b[prv].n -= amt;
    }
    cout << b[0].n << endl << b[1].n << endl << b[2].n << endl;
}