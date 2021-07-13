#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

void setIO(string name = "word") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();

    int size, maxLen, len; 
    cin >> size >> maxLen;

    vector<vector<string>> lines {};
    vector<string> temp;

    string tkn;
    string words[size];
    int i = 0;
    while (cin >> tkn) {
        words[i] = tkn;
        i++;
    }

    for (i = 0; i < size;) {
        tkn = words[i];
        len += tkn.length();
        temp.push_back(tkn);

        if (len > maxLen) {
            len = 0;
            temp.pop_back();
            lines.push_back(temp);
            temp = {};
        } else {
             i++;
        }
    }

    lines.push_back(temp);

    for (vector<string> line : lines) {
        for (string s : line)
            cout << s << " ";
        cout << endl;
    }
}