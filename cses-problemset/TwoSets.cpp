#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    ll n, sum, i;
    cin >> n;

    sum = n*(n + 1)/2;

    if (sum % 2 != 0) {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES" << "\n";

    vector<int> s1;
    ll half = sum/2;

    for (i = n; i > 0; i--) {
        if (i <= half) {
            s1.push_back(i);
            half -= i;
        }
    }

    cout << s1.size() << "\n";
    for (auto &x : s1)
        cout << x << " ";
    cout << "\n" << n - s1.size() << "\n";
    for (i = 1; i <= n; i++) {
        if (find(s1.begin(), s1.end(), i) == s1.end())
            cout << i << " ";
    }
}