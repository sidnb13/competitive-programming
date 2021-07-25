#include <bits/stdc++.h>
using namespace std;

#define NAME "mowing"
#define fore(start,end,i) for (int i = start; i < end; i++)
#define fori(start,end,i) for (int i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N; cin >> N;

    pair<int,int> grid[2001][2001];

    int time = 0, x = 1000, y = 1000, maxT = INT_MAX;

    fore(0,N,i) {
        char dir;
        int dist, deltaT;
        cin >> dir >> dist;

        int dx,dy;

        if (dir == 'N') {
            dy = 1;
            dx = 0;
        } else if (dir == 'E') {
            dy = 0;
            dx = 1;
        } else if (dir == 'S') {
            dy = -1;
            dx = 0;
        } else {
            dy = 0;
            dx = -1;
        }

        fore(0,dist,j) {
            if (grid[x][y].second) {
                deltaT = time - grid[x][y].first;
                maxT = min(deltaT,maxT);
            }

            grid[x][y] = {time++,1};

            y += dy;
            x += dx;
        }
    }

    if (maxT == INT_MAX)
        cout << -1 << endl;
    else
        cout << maxT << endl;
}