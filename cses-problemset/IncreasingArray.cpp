#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, i;
    ll  prev, curr, add, moves = 0;

    cin >> n;
    cin >> prev;

    for (i = 1; i < n; i++) {
        cin >> curr;
        add = abs(curr - prev < 0 ? curr - prev : 0);
        prev = curr + add;
        moves += add;
    }

    cout << moves << "\n";
}