#include <bits/stdc++.h>
using namespace std;

#define NAME "cbarn"
#define fore(start,end,i) for (i = start; i < end; i++)
#define fori(start,end,i) for (i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N,i,j,dist,minDist = INT_MAX; 
    cin >> N;

    int r[N], d[N]; fore(0,N,i) cin >> r[i];

    fore(0,N,i) {
        dist = 0;
        fore(0,N,j) {
            dist += j*r[(i+j)%N];
        }
        d[i] = dist;
        minDist = min(minDist,dist);
    }

    cout << minDist << endl;
}