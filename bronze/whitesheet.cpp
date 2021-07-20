#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

struct rect {
    ll x1, y1, x2, y2;
    ll getArea() {return abs((x2-x1)*(y2-y1));}
};


ll intr2 (const rect &a, const rect &b) {
    ll x = max(min(a.x2,b.x2)-max(a.x1,b.x1),(ll)0),
    y = max(min(a.y2,b.y2)-max(a.y1,b.y1),(ll)0);

    return x*y;
}

ll intr3 (const rect &a, const rect &b, const rect &c) {
    ll x = max(min({a.x2,b.x2,c.x2})-max({a.x1,b.x1,c.x1}),(ll) 0),
    y = max(min({a.y2,b.y2,c.y2})-max({a.y1,b.y1,c.y1}),(ll)0);
    
    return x*y;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    rect w,b1,b2;
    cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;

    cout << (w.getArea() - (intr2(w,b1) + intr2(w,b2) + intr3(w,b1,b2)) > 0 ? "YES" : "NO") << endl;
}