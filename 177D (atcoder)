// :(
#ifndef ONLINE_JUDGE
    #include "bits/stdc++.h"

#else
    #include <bits/stdc++.h>

#endif

#pragma GCC optimization ("O2")
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
#define iosfal ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)
typedef long long  ll;
typedef long double ld;

int constexpr maxn = 200'080;
map <pair<int, int>, int> G;
struct DSU {
    int par[maxn], cap[maxn];
    DSU() {
        for (int i = 0; i < maxn; i++) {
            par[i] = i, cap[i] = 1;
        }
    }

    int get(int v) {
        if(par[v] == v)
            return v;
        return get(par[v]);
    }

    void merge(int a, int b) {
        a = get(a), b = get(b);
        if(a == b)
            return;
        if(cap[a] > cap[b]) // a<= b
            swap(a,b);
        par[a] = b;
        cap[b] += cap[a];

    }
}dsu;
int main() {
    iosfal;
    int n, m;
    cin >> n >> m;
    for(int i = 0;i < m;i++){
        int x, y;
        cin >> x >> y;
        pair<int, int> d = make_pair(x,y);
        if(!G[d]){
            G[d]++;
            dsu.merge(x,y);
            //debug(dsu.cap[dsu.get(1)]);
            //debug(dsu.cap[max(dsu.get(x),dsu.get(y))]);

        }
    }
    int maxi = 0;
    for(int i = 0;i <= n;i++)
        maxi = max(maxi,dsu.cap[ dsu.get(i) ] );
        //cout<<"cap ["<< i <<"] = "<<dsu.cap[i] <<endl;
    cout<<maxi;
    return 0;
}

/* question link : https://atcoder.jp/contests/abc177/tasks/abc177_d */
