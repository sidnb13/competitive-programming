#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);                       

    ll n,k;
    cin >> n;

    for (k = 1; k <= n; k++)
        cout << (k*k*(k*k - 1)/2 - 4*(k-1)*(k-2)) << "\n";
}
