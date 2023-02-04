#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<string> str_list;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (i < k) {
            str_list.push_back(str);
        }
    }
    sort(str_list.begin(), str_list.end());
    for (string s : str_list) {
        cout << s << endl;
    }

    return 0;
}