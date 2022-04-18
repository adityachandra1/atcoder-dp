// Aditya Chandra
#include <bits/stdc++.h>

// short snip
#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto& x : a)
#define all(x) x.begin(), x.end()
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pii pair<ll, ll>
#define pb push_back
#define ff first
#define ss second
#define YES "YES"
#define NO "NO"

constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 1e9 + 7;

using namespace std;

void solve() {
    ll n;
    cin >> n;
    vi h(n);
    for1(n) {
        cin >> h[i];
    }
    vi dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);

    for4(i, 2, n) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << endl;
    cout << dp[n - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    // ll t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
}