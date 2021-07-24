#include <bits/stdc++.h>
using namespace std;

#define NAME "tttt"
#define fore(start,end,i) for (int i = start; i < end; i++)
#define fori(start,end,i) for (int i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    char maze[3][3];
    fore(0,3,i)
        fore(0,3,j) cin >> maze[i][j];

    char vec[8][3] {};

    int idx = 0;
    //diagonals
    fore(0,3,i) {
        vec[idx][i] = maze[i][i];
        vec[idx+1][i] = maze[i][3-i-1];
    }
    idx += 2;

    //go through rows/cols
    fore(0,3,i) {
        fore(0,3,j) {
            vec[idx][j] = maze[i][j];
            vec[idx+1][j] = maze[j][i];
        }
        idx += 2;
    }

    //make set
    set<set<char>> pos = {};
    fore(0,8,i) pos.insert(set<char>{vec[i][0],vec[i][1],vec[i][2]});

    int ind = 0, two = 0;

    for (auto el : pos) {
        if (el.size() == 1)
            ind++;
        else if (el.size() == 2)
            two++;
    }
    
    std::cout << ind << endl << two << endl;
}