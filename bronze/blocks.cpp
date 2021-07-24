#include <bits/stdc++.h>
using namespace std;

#define NAME "blocks"
#define fore(start,end,i) for (i = start; i < end; i++)
#define fori(start,end,i) for (i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N,i;
    cin >> N;

    string s1,s2;

    int res[26] = {0};

    fore(0,N,i) {
        cin >> s1 >> s2;

        int n1[26] = {0}, n2[26] = {0};

        for (int j = 0; j < (int)s1.size(); j++)
            n1[s1[j] - 'a']++;
        for (int j = 0; j < (int)s2.size(); j++)
            n2[s2[j] - 'a']++;

        for (int j = 0; j < 26; j++) {
            res[j] += max(n1[j],n2[j]);
        }
    }

    fore(0,26,i) cout << res[i] << endl;
}