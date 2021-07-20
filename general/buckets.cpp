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
    setIO("buckets");
    
    //find bucket and lake
    int Bi {}, Bj {}, Li {}, Lj {}, Ri {}, Rj {};

    for (int i = 0; i < 10; i++) {
        string tok;
        cin >> tok;

        for (int j = 0; j < 10; j++) {
            if (tok[j] == 'B') {
                Bi = i;
                Bj = j;
            } 
            if (tok[j] == 'L') {
                Li = i;
                Lj = j;
            }
            if (tok[j] == 'R') {
                Ri = i;
                Rj = j;
            }
        }
    }

    // find min dist.
    if (Lj == Rj && ((Ri < Bi && Ri > Li) || (Ri > Bi && Ri < Li))) {
        cout << abs(Bi - Li) + 2;
    }
    else if (Li == Ri && ((Rj < Bj && Rj > Lj) || (Rj > Bj && Rj < Lj)))
    {
        cout << abs(Bj - Lj) + 2;
    }
    else
    {
        return abs(Bj - Lj) + abs(Bi - Li) - 1;
    }
}