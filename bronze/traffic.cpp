#include <bits/stdc++.h>
using namespace std;

#define NAME "traffic"
#define fore(start,end,i) for (i = start; i < end; i++)
#define fori(start,end,i) for (i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N;
    cin >> N;

    string s[N];
    int a[N], b[N];

    int i;

    fore(0,N,i) cin >> s[i] >> a[i] >> b[i];

    int minv = -99999, maxv = 99999;
    //backward itr
    for (i = N-1; i >= 0; i--) {
        if (s[i] == "on") {
            minv -= b[i];
            maxv -= a[i];
            minv = max(0,minv);
        } else if (s[i] == "off") {
            minv += a[i];
            maxv += b[i];
        } else {
            minv = max(minv,a[i]);
            maxv = min(maxv,b[i]);
        }
    }
    cout << minv << " " << maxv << endl;

    minv = -99999; maxv = 99999;
    //forward itr
    fore(0,N,i) {
        if (s[i] == "on") {
            minv += a[i];
            maxv += b[i];
        } else if (s[i] == "off") {
            minv -= b[i];
            maxv -= a[i];
            minv = max(0,minv);
        } else {
            minv = max(minv,a[i]);
            maxv = min(maxv,b[i]);
        }
    }
    cout << minv << " " << maxv << endl;
}