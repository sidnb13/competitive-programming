#include <bits/stdc++.h>
using namespace std;

#define NAME "shuffle"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N, i;
    cin >> N;

    int a[N], curr[N], old[N];
    
    for (i = 0; i < N; i++) cin >> a[i];
    for (i = 0; i < N; i++) cin >> curr[i];

    for (int j = 0; j < 3; j++) {
        for (i = 0; i < N; i++)
            old[i] = curr[a[i]-1];
        for (i = 0; i < N; i++)
            curr[i] = old[i];
    }

    for (i = 0; i < N; i++) cout << curr[i] << endl;
}