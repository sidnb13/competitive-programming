#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int n,i,c;
    cin >> n;

    if (n == 1)
        cout << n;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else if (n == 4)
        cout << "3 1 4 2";
    else {
        for (i = n % 2 == 0 ? n : n - 1; i >= 2; i -= 2)
            cout << i << " ";
        for (i = n % 2 == 0 ? n - 1 : n; i >= 1; i -= 2)
            cout << i << " ";
    }
}