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
    int o = 0, x = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "For")
            o++;
        else
            x++;
    }
    if (o > x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}