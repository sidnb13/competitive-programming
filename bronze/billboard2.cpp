#include <bits/stdc++.h>
using namespace std;

#define NAME "billboard"

struct rect {int x1, y1, x2, y2; int area(){return (x2-x1)*(y2-y1);}};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    rect mow, bill;
    cin >> mow.x1 >> mow.y1 >> mow.x2 >> mow.y2;
    cin >> bill.x1 >> bill.y1 >> bill.x2 >> bill.y2;

    int xint = max(0,abs(max(mow.x1,bill.x1) - min(mow.x2,bill.x2)));
    int yint = max(0,abs(max(mow.y1,bill.y1) - min(mow.y2,bill.y2)));

    auto covered = [](int x1,int y1, int x2, int y2, int x, int y){
        return x >= x1 && x <= x2 && y <= y2 && y >= y1;
    };

    int c = covered(bill.x1,bill.y1,bill.x2,bill.y2,mow.x1,mow.y1)
            + covered(bill.x1,bill.y1,bill.x2,bill.y2,mow.x2,mow.y2)
            + covered(bill.x1,bill.y1,bill.x2,bill.y2,mow.x1,mow.y2)
            + covered(bill.x1,bill.y1,bill.x2,bill.y2,mow.x2,mow.y1);

    if (c == 4)
        cout << 0;
    else if (c < 2)
        cout << mow.area();
    else
        cout << mow.area() - xint * yint;
    
}