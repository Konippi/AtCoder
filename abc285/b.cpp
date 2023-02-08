#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int diff = 1; diff < n; diff++) {
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i + diff < n) {
                if (s[i] != s[i + diff])
                    cnt++;
                if (ans < cnt)
                    ans = cnt;
                else {
                    cnt = 0;
                    break;
                }
            } else {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}