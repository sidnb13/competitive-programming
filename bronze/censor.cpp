#include <bits/stdc++.h>
using namespace std;

#define NAME "censor"
#define fore(start,end,i) for (int i = start; i < end; i++)
#define fori(start,end,i) for (int i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    string s,w;
    cin >> s >> w;

    string res;

    fore(0,(int)s.size(),i) {
        res += s[i];
        if (res.size() >= w.size() && res.substr(res.size()-w.size()) == w)
            res.resize(res.size() - w.size());
    }
    
    cout << res << endl;
}