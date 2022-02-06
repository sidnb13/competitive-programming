#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n, a, total = 0;
    cin >> n;

    ll sum = n*(n+1)/2;

    while (cin >> a)
        total += a;

    cout << sum - total << "\n";
}