#include <bits/stdc++.h>
using namespace std;

#define fore(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define int long long
#define fori(start,end,i) for (int i = start; i < end; i++)

tuple<int, int, int> find_min_combo(int n) {
    int p[3] = {n/6, n/8, n/10};
    int r[3] = {p[0] > 0 ? n % 6 : 0,p[1] > 0 ? n % 8 : 0,p[2] > 0 ? n % 10 : 0};

    int min_r = *min_element(r,r+n);
    int min_r_idx = distance(begin(r),min_element(r,r+n));
    int min_p = p[min_r_idx];

    return {min_r, min_r_idx, min_p};
}

//pair<int,int> pz[3] = {,{8,20},{10,25}};

signed main() {
    cin.tie(0)->sync_with_stdio(0);
                                   
    int t;
    cin >> t;

    fori(0,t,i) {
        int n;
        cin >> n;

        auto min = find_min_combo(n);
        int p1 = get<2>(min) == 0 ? pz[0].first : get<2>(min);

        auto min2 = find_min_combo(get<0>(min));
        int p2 = get<2>(min2) == 0 ? pz[0].first : get<2>(min2);

        cout << p1*pz[get<1>(min)].second + p2*pz[get<1>(min2)].second << endl;
    }
}
