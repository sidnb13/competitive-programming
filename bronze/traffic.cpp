#include <bits/stdc++.h>
using namespace std;

#define NAME "traffic"
#define fore(start,end,i) for (i = start; i < end; i++)
#define fori(start,end,i) for (i = start; i <= end; i++)

struct sensor {int a,b; string s;};

void update(int &min, int &max, string s, int a, int b, int diff) {
    int currMax = std::max(a,b);
    if (strcmp(s.c_str(), "on") == 0) {
        min += diff*currMax;
        max += diff*currMax;
    } else if (strcmp(s.c_str(), "off") == 0) {
        min -= diff*currMax;
        max -= diff*currMax;
    } else {
        min = std::max(min, a);
        max = std::min(max, b);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N,i; cin >> N;

    sensor arr[N];
    fore(0,N,i) cin >> arr[i].s >> arr[i].a >> arr[i].b;

    int min = arr[N == 1 ? 0 : 1].a, max = arr[N == 1 ? 0 : 1].b, currMax;

    fore(1,N-1,i) {
        update(min, max, arr[i].s, arr[i].a, arr[i].b, 1);
        //cout << min << " " << max << endl;
    }

    int minA = min, minB = arr[N == 1 ? 0 : N-2].a, maxA = max, maxB = arr[N == 1 ? 0 : N-2].b;

    update(minA,maxA, arr[0].s, arr[0].a, arr[0].b, -1);
    update(minB,maxB, arr[N-1].s, arr[N-1].a, arr[N-1].b, 1);

    cout << minA << " " << maxA << endl;
    cout << minB << " " << maxB << endl;
}