#include <bits/stdc++.h>
using namespace std;

#define NAME "lostcow"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int x,y;
    cin >> x >> y;

    int step = 1, sign = 1, dist = 0, prev = x;

    while(true) {
        if ((sign == -1 && y <= x && x-step <= y) || (sign == 1 && x <= y && x+step >= y)) {
            dist += abs(x-prev) + abs(x-y);
            cout << dist << endl;
            break;
        } else {
            dist += step + abs(x-prev);
            prev = x + step*sign;
            step *= 2;
            sign *= -1;
        }
    }
}