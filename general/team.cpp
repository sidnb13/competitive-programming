#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,total {};

    cin >> n;

    cout << n;

    for (int i = 0; i < n; n++) {
        int a, b, c;
        cin >> a >> b >> c;
        total += a + b + c >= 2 ? 1 : 0;
    }

    cout << total << endl;
}