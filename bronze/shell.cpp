#include <bits/stdc++.h>
using namespace std;

#define NAME "shell"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int pts[3];
    int score,shell,a,b,g,n;

    cin >> n;

    for (int i = 1; i <= 3; i++) {
        score = 0, shell = i;
        for (int j = 0; j < n; j++) {
            cin >> a >> b >> g;
            shell = a == shell ? b : (b == shell ? a : shell); 
            score += (shell == g);
        }
        pts[i-1] = score;
    }
    cout << max({pts[0], pts[1], pts[2]}) << endl;
}