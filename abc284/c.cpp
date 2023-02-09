#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

vector<bool> seen;

void dfs(Graph &G, int v) {
    seen[v] = true;
    for (auto k : G[v]) {
        if (!seen[k]) {
            dfs(G, k);
        }
    }
}

int main(void) {
    int n, m;
    cin >> n >> m;
    Graph G(n);
    seen.assign(n, false);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!seen[i]) {
            dfs(G, i);
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}