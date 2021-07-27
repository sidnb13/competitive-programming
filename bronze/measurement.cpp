#include <bits/stdc++.h>
using namespace std;

#define NAME "measurement"
#define fore(start,end,i) for (int i = start; i < end; i++)
#define fori(start,end,i) for (int i = start; i <= end; i++)

struct rec {
    int day;
    string cow;
    int inc;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen(((string) NAME + ".in").c_str(), "r", stdin);
    freopen(((string) NAME + ".out").c_str(), "w", stdout);

    int N;
    cin >> N;

    pair<string,int> prev[3] = {{"Bessie",7},{"Elsie",7},{"Mildred",7}};
    pair<string,int> curr[3] = {{"Bessie",7},{"Elsie",7},{"Mildred",7}};

    rec meas[N];

    auto cmp1 = [](rec a, rec b){return a.day < b.day;};
    auto cmp2 = [](pair<string,int> a, pair<string,int> b){return a.second > b.second;};

    fore(0,N,i) cin >> meas[i].day >> meas[i].cow >> meas[i].inc;
    sort(meas,meas+N,cmp1);

    int days = 0;

    fore(0,N,i) {
        fore(0,3,j) {
            if (curr[j].first == meas[i].cow)
                curr[j].second += meas[i].inc;
        }
        sort(curr,curr+3,cmp2);
        
        //get list of top cows from prev and curr -> the leaderboards to compare
        set<string> topPrev = {prev[0].first}, topCurr = {curr[0].first};
        fore(1,3,j) {
            if (curr[j].second == curr[j-1].second)
                topCurr.insert({curr[j].first,curr[j-1].first});
            else break;
        }
        fore(1,3,j) {
            if (prev[j].second == prev[j-1].second)
                topPrev.insert({prev[j].first,prev[j-1].first});
            else break;
        }

        days += topCurr != topPrev; //increment if there's a change
        
        copy(curr,curr+3,prev);
    }

    cout << days << endl;
}