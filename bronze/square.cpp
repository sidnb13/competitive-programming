#include <bits/stdc++.h>
using namespace std;

#define NAME "square"

struct rect {int x1, y1, x2, y2;};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    rect a1, a2;
    cin >> a1.x1 >> a1.y1 >> a1.x2 >> a1.y2;
    cin >> a2.x1 >> a2.y1 >> a2.x2 >> a2.y2;

    int xes[4] = {a1.x1,a1.x2,a2.x1,a2.x2};
    int yes[4] = {a1.y1,a1.y2,a2.y1,a2.y2};

    sort(xes,xes+4);
    sort(yes,yes+4);

    cout << max((xes[3]-xes[0])*(xes[3]-xes[0]),(yes[3]-yes[0])*(yes[3]-yes[0])) << endl;
}