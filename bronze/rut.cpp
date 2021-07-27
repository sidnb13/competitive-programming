#include <bits/stdc++.h>
using namespace std;

#define fore(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define fori(start,end,i) for (int i = start; i <= end; i++)

struct cow {int x0,y0,x,y,t = 0,dist = INT_MAX; bool stop = 0;};

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int N;
    cin >> N;

    vector<cow> cows(N);

    fori(0,N,i) {
        char dir;
        cin >> dir;
        if (dir == 'N') 
            cows[i].t = 1;
        cin >> cows[i].x0 >> cows[i].y0;
        cows[i].x = cows[i].x0;
        cows[i].y = cows[i].y0;
    }

    fori(0,N,i) {
        fore(co1,cows) {
            fore(co2,cows) {
                cow& c1 = *co1;
                cow& c2 = *co2;
                if (c1.t ^ c2.t) { //perpendicular
                    int dx = abs(c2.x - c1.x), dy = abs(c2.y - c1.y);
                    if (dx > dy) {
                        if (!c1.t && !c1.stop) {
                            c1.dist = c1.x+dx-c1.x0;
                        } else if (!c2.t && !c2.stop) {
                            c2.dist = c2.x+dx-c2.x0;
                        }
                    } else if (dx < dy) {
                        if (c1.t && !c1.stop) {
                            c1.dist = c1.y+dy-c1.y0;
                        } else if (c2.t && !c2.stop) {
                            c2.dist = c2.y+dy-c2.y0;
                        }
                    }
                } else { //chase
                    if (c1.t) {
                        if (c1.y > c2.y && c1.stop && !c2.stop) {
                            c2.dist = c1.y - c2.y0;
                        } else if (c1.y < c2.y && c2.stop && !c1.stop) {
                            c1.dist = c2.y - c1.y0;
                        }
                    } else {
                        if (c1.x > c2.x && c1.stop && !c2.stop) {
                            c2.dist = c1.x - c2.x0;
                        } else if (c1.x < c2.x && c2.stop && !c1.stop) {
                            c1.dist = c2.x - c1.x0;
                        }
                    }
                }

            }
        }

        fore(c,cows) { //update
            cow& co = *c;
            if (!co.stop) {
                if (co.dist == (co.t ? co.y : co.x)) {
                    co.stop = 1;
                } else {
                    co.x += !co.t ? 1 : 0;
                    co.y += co.t ? 1 : 0;
                }
            }
        }
    }
    cout << endl;
    fore(c,cows) {
        if ((*c).dist == INT_MAX)
            cout << "Infinity";
        else cout << (*c).dist;

        cout << " " << (*c).stop << endl;
    }

}