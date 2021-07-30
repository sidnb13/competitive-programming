#include <bits/stdc++.h> //NOLINT
using namespace std;

#define fore(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define fori(start,end,i) for (int i = start; i < end; i++)

int colinear_axis(int x1,int x2,int x3, int y1, int y2, int y3) {
    return (x1 == x2 && x2 == x3) * (y2 >= min(y1,y3) && y2 <= max(y1,y3));
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                    
    int t;
    cin >> t;

    fori(0,t,i) {
        int ax, ay, bx, by, fx, fy;
        cin >> ax >> ay >> bx >> by >> fx >> fy;

        int col_all = 2 * (colinear_axis(ax,fx,bx,ay,fy,by) + colinear_axis(ay,fy,by,ax,fx,bx));


        int ans = abs(ax-bx) + abs(ay-by) + col_all;

        cout << ans << endl;

    }
}
