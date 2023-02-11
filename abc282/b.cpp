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
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            bool possible = true;
            for (int k = 0; k < m; k++) {
                if (s[i][k] == 'x' && s[j][k] == 'x') {
                    possible = false;
                }
            }
            if (possible)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}