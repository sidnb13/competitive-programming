#include <bits/stdc++.h>
using namespace std;

#define fore(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define fori(start,end,i) for (int i = start; i < end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    fori(0,t,i) {
        int k,n,m;
        cin >> k >> n >> m;

        int a[n], b[m];

        fori(0,n,j) cin >> a[j];
        fori(0,m,j) cin >> b[j];

        int ai = 0, bi = 0;

        vector<int> c;
        bool drop = 1;

        while (ai < n || bi < m) {
            if (ai < n && a[ai] == 0) {
                c.push_back(0);
                ai++;                    
                k++;
            } else if (bi < m && b[bi] == 0) {
                c.push_back(0);
                bi++;
                k++;
            } else if (ai < n && a[ai] <= k) {
                c.push_back(a[ai++]);
            } else if (bi < m && b[bi] <= k) {
                c.push_back(b[bi++]);
            } else {
                drop = 0;
                break;
            }
        }

        if (drop) {
            fori(0,n+m,j) cout << c[j] << (j == n+m-1 ? "" : " ");
            cout << endl;             
        } else cout << -1 << endl;
    }
}
