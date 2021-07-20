#include <bits/stdc++.h>
using namespace std;

#define NAME "billboard"

struct rect {
    int x1, y1, x2, y2;
    rect(int x11,int y11,int x21,int y21) {x1 = x11; x2 = x21; y1 = y11; y2 = y21;}
    int getArea() {return (x2-x1)*(y2-y1);}
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int x1,x2,y1,y2;
    
    cin >> x1 >> x2 >> y1 >> y2;
    rect B1 = {x1,x2,y1,y2};
    
    cin >> x1 >> x2 >> y1 >> y2;
    rect B2 = {x1,x2,y1,y2};

    cin >> x1 >> x2 >> y1 >> y2;
    rect T = {x1,x2,y1,y2};

    //intersection area for B1<T
    int yint1 = max(0,min(T.y2,B1.y2)-max(T.y1,B1.y1));
    int xint1 = max(0,min(T.x2,B1.x2)-max(T.x1,B1.x1));

    int ar1 = yint1*xint1;

    //intersection area for B2<T
    int yint2 = max(0,min(T.y2,B2.y2)-max(T.y1,B2.y1));
    int xint2 = max(0,min(T.x2,B2.x2)-max(T.x1,B2.x1));

    int ar2 = yint2*xint2;

    cout << B1.getArea() - ar1 + B2.getArea() - ar2 << endl;
        
}