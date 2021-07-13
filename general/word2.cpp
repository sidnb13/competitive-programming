#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

void setIO(string name) {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("word");

    int N, K;

    cin >> N >> K;

    int len;

    int n = N;

    while (n--) {
        string tkn;
        cin >> tkn;
        len += tkn.size();

        if (len <= K && n != N-1)
            cout << " ";

        if (len > K) {
            cout << endl;
            len = tkn.size();
        }

        cout << tkn;
    }
}