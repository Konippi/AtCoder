#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int n, m;
Graph G;
vector<bool> seen;

bool dfs(int now, int before) {
    seen[now] = true;
    for (auto k : G[now]) {
        if (k == before) {
            continue;
        }
        if (seen[k]) {
            return true;
        }
        dfs(k, now);
    }
    return false;
}

int main(void) {
    cin >> n >> m;
    G.resize(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    seen.assign(n, false);
    bool hasLoop = dfs(0, -1);
    for (auto k : seen) {
        if (!k) {
            cout << "No" << endl;
            return 0;
        }
    }
    if (hasLoop) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}