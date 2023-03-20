#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    string s;
    cin >> s;
    for (auto c : s) {
        if (c == '0') {
            cout << '1';
        } else {
            cout << '0';
        }
    }

    return 0;
}
