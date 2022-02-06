#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    string s;
    getline(cin, s);

    int maxn = 1, curr = maxn, i;

    for(i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1])
            curr++;
        else 
            curr = 1;
        maxn = max(curr, maxn);
    }

    cout << maxn << "\n";
}