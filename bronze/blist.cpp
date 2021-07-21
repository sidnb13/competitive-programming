#include <bits/stdc++.h>
using namespace std;

#define NAME "blist"
#define fore(start,end,i) for (i = start; i < end; i++)
#define fori(start,end,i) for (i = start; i <= end; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N,i,j; cin >> N;

    int start[N], end[N], buckets[N];

    fore(0,N,i) {cin >> start[i] >> end[i] >> buckets[i];}

    int totalBuckets, maxBuckets;
    
    fori(*min_element(start,start+N),*max_element(end,end+N),i) {
        totalBuckets = 0;
        fore(0,N,j) {
            if (i <= end[j] && i >= start[j])
                totalBuckets += buckets[j];
        }
        maxBuckets = max(totalBuckets,maxBuckets);
    }
    cout << maxBuckets << endl;
}