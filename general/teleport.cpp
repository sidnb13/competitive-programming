#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

void setIO(string name = "teleport") { 
	cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin); 
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
    setIO();

    int a, b, x, y, dist;

    cin >> a >> b >> x >> y;

    dist = min({abs(b - a), abs(x - a) + abs(y - b), abs(x - b) + abs(y - a)});

    cout << dist << endl;
}