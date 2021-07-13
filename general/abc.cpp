#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int c[7];
    for (int i = 0; i < 7; i++)
        cin >> c[i];

    sort(c, c + 7);
    printf("%d %d %d", c[0], c[1], c[6] - c[0] - c[1]);
}