#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<set<int>> s(m);
    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        map<int, int> mp;
        for (int j = 0; j < c; j++) {
            int a;
            cin >> a;
            s[i].insert(a);
        }
    }
    int ans = 0;
    for (int bit = 0; bit < (1 << m); bit++) {
        set<int> combination;
        for (int i = 0; i < m; i++) {
            if (bit & (1 << i)) {
                combination.insert(i);
            }
        }
        set<int> u;
        for (auto k : combination) {
            set_union(u.begin(), u.end(), s[k].begin(), s[k].end(),
                      inserter(u, u.end()));
        }
        if (u.size() == n) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}