#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
ll MOD = 998244353;
ll INF = 1LL << 60;
double PI = 3.14159265359;

class UnionFind {
  public:
    vector<int> parent;
    UnionFind(int N) { parent = vector<int>(N, -1); }

    int root(int A) {
        if (parent[A] < 0)
            return A;

        return parent[A] = root(parent[A]);
    }

    int size(int A) { return -parent[root(A)]; }

    bool unite(int A, int B) {
        A = root(A);
        B = root(B);
        if (A == B) {
            return false;
        }
        if (size(A) < size(B)) {
            swap(A, B);
        }
        parent[A] += parent[B];
        parent[B] = A;

        return true;
    }
};

int main(void) {
    int n, m;
    cin >> n >> m;
    UnionFind uni(n);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        bool hasLoop = false;
        cin >> a >> b;
        a--;
        b--;
        if (uni.root(a) == uni.root(b)) {
            hasLoop = true;
            ans++;
        }
        if (!hasLoop) {
            uni.unite(a, b);
        }
    }
    cout << ans << endl;

    return 0;
}