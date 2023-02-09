#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 != 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}