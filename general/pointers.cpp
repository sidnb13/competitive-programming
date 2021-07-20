#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3] = {1,2,3};
    int *b = a;
    cout << *b << endl;
    b++;
    cout << *b << endl;
    b++;
    cout << *b << endl;
}