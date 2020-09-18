/*
ID: samanfa1
TASK: milk2
LANG: C++14
*/

#ifndef ONLINE_JUDGE
    #include "bits/stdc++.h"

#else
    #include <bits/stdc++.h>

#endif

#pragma GCC optimization ("O9")
#pragma GCC optimization ("unroll-loops")

using namespace std;

//#warning not there YET
//#error hello
#define _debug freopen("kn.txt","w",stdout);
#define lint long long int
#define endl '\n'
#define kill(x) return cout<<x<<'\n', 0
#define debug(x) cout << #x << " : " << x << '\n'
#define pb push_back
#define ppb pop_back
#define speed  cout<<clock()*1000/CLOCKS_PER_SEC<<" ms";
#define F first
#define S second
#define _ri [i<<1|1]
#define _le [i<<1]
#define _fast ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
typedef long long  ll;
typedef long double ld;

//int constexpr maxn = 1'000'023;
//int a[maxn]; // 1-> l( , 2 -> r) , 3-> l,r ()
map<int, pair<int, int> > a; // to anddis i chand ta baze chand ta baste
vector<pair<int, int> >seg;
int main() {
    freopen("milk2.in","r",stdin);
    freopen("milk2.out","w",stdout);
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int l, r;
        cin >> l >> r;
        a[l].first ++;
        a[r].second ++;
    }
    ll l = 0, r = 0, t = 0, begin, end;
    for(auto i : a) {
        if(i.second.first > 0){
            if(l == 0)
                begin = i.first;
            l += i.second.first;
        }
        if(i.second.second > 0) {
            r += i.second.second;
        }
        if(l > 0 and l == r){
            end = i.first;
            //seg[t].F = begin, seg[t].S = end;
            seg.pb(make_pair(begin,end));
            l = 0, r = 0; t++;
        }

        /*
        if(a[i] == 1) {
            if(l == 0)
                begin = i;
            l++;
        }
        else if(a[i] == 2) {
            r++;
        }
        if(l > 0 and l == r){
            end = i;
            seg[t].F = begin, seg[t].S = end;
            l = 0, r = 0, t++;
        }
         */
    }
    ll mini = 0;
    for(int i = 0;i < t ;i++)
        mini = max(mini,1LL * (seg[i+1].F - seg[i].S));

    ll maxi = 0;
    for(auto u : seg) {
        maxi = max(maxi, 1LL * (u.S - u.F));
    }
    cout<<maxi <<" "<< mini <<endl;
}

