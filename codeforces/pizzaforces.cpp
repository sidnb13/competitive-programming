#include <bits/stdc++.h>
using namespace std;

#define fore(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define fori(start,end,i) for (int i = start; i < end; i++)

pair<int,int> pz[3] = {{6,15},{8,20},{10,25}};

tuple<long long, int, long long> find_min_combo(long long n) {
    //cout << "n = " << n << endl;
    long long p[3] = {n/6, n/8, n/10};
    long long r[3] = {p[0] > 0 ? n % 6 : 0,p[1] > 0 ? n % 8 : 0,p[2] > 0 ? n % 10 : 0};

    // cout << p[0] << " " << p[1] << " " << p[2] << endl;
    // cout << r[0] << " " << r[1] << " " << r[2] << endl;
    // cout << endl;

    long long min_r = *min_element(r,r+n);
    int min_r_idx = distance(begin(r),min_element(r,r+n));
    long long min_p = p[min_r_idx];

    return {min_r, min_r_idx, min_p};
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int t;
    cin >> t;

    fori(0,t,i) {
        long long n;
        cin >> n;

        auto min = find_min_combo(n);
        auto min2 = find_min_combo(get<min,0>);

    }
}