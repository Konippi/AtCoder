#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    vector<int> dp(x + 1, -1);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            if (dp[j] >= 0) {
                dp[j] = b[i];
            } else if (j < a[i] || dp[j - a[i]] <= 0) {
                dp[j] = -1;
            } else {
                dp[j] = dp[j - a[i]] - 1;
            }
        }
    }
    if (dp[x] >= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}