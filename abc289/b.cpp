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
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        mp[a] = a + 1;
    }
    for (int i = 1; i <= n; i++) {
        vector<int> part;
        part.push_back(i);
        while (mp[i] != 0) {
            part.push_back(mp[i]);
            i++;
        }
        reverse(part.begin(), part.end());
        for (auto k : part) {
            cout << k << " ";
        }
    }

    return 0;
}
