#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistic_node_update>

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
const char nl = '\n';
const ll mod = 1e9+7;
const int oo = 2e9;
const double pi = 2*acos(0.0);

//                L   U  D  R  UL  UR  DR DL
const int di[] = {0, -1, 0, 1, -1, -1, 1, 1};
const int dj[] = {-1, 0, 1, 0, -1, 1, 1, -1};

void solve() {}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
