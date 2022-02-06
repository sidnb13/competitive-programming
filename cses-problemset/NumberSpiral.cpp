#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int n;
    ll y,x,res;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> y >> x;
        bool c1 = y % 2 == 0 && x % 2 != 0,
            c2 = y % 2 != 0 && x % 2 == 0,
            c3 = y % 2 == 0 && x % 2 == 0,
            c4 = y % 2 != 0 && x % 2 != 0;

        if (c1) { //y even, x odd
            if (x <= y)
                res = y*y - (x - 1);
            else
                res = x*x - (y - 1);
        } else if (c2) { //y odd, x even
            if (x <= y)
                res = (y-1)*(y-1) + (x - 1) + 1;
            else
                res = (x-1)*(x-1) + (y - 1) + 1;
        } else if (c3) { //y even, x even
            if (x <= y)
                res = y*y - (x - 1);
            else
                res = (x-1)*(x-1) + (y - 1) + 1;
        } else if (c4) { //y odd, x odd
            if (x <= y)
                res = (y-1)*(y-1) + (x - 1) + 1;
            else
                res = x*x - (y - 1);
                
        }
        cout << res << "\n";
    }
}