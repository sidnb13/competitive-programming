#include <bits/stdc++.h>
using namespace std;

#define NAME "speeding"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N,M,i,j,s,l;
    cin >> N >> M;

    int road[100], cow[100];

    int currMile {};

    for (i = 0; i < N; i++) {
        cin >> l >> s;
        for (j = currMile; j < currMile + l; j++)
            road[j] = s;
        currMile += l;
    }

    currMile = 0;

    for (i = 0; i < M; i++) {
        cin >> l >> s;
        for (j = currMile; j < currMile + l; j++)
            cow[j] = s;
        currMile += l;
    }

    int spdDif;
    for (i = 0; i < 100; i++)
        spdDif = max(spdDif, cow[i]-road[i]);
        
    cout << spdDif << endl;
}