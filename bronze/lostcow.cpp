#include <bits/stdc++.h>
using namespace std;

#define NAME "lostcow"
using ll = long long int;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int x,y;
    cin >> x >> y;

    int step = 1, sign = 1, dist = 0;

    while(true) {
        if ((sign == 1 && x<=y && x+step<=y) || (sign == -1 && x-step>=y && x>=y )) {
            dist += abs(x-y);
            cout << dist << endl;
            break;
        } else {
            step *= 2;
            dist += step;
            sign *= -1;
        }
    }
}