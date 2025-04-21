// codeforces.com/problemset/problem/1904/A
// A. Forked!
/**
 * Author: k7
 **/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
typedef long long ll;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Utility Functions
inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// prime factorization
//  void primeFactorization(int n){
//      int count = 0
//      while(n % 2 == 0){
//          count ++;
//          n /= 2;
//      }
//
//      for(int i =3;i<sqrt(n);i+=2){
//          while(n % i == 0){
//              count ++;
//              x /= i;
//          }
//      }
//      return count;
//  }

// Function to compute (base^exp) % mod using modular exponentiation
// int mod_pow(int base, int exp, int mod) {
//     int result = 1;
//     base = base % mod;
//     while (exp > 0) {
//         if (exp % 2 == 1) {
//             result = (result * base) % mod;
//         }
//         base = (base * base) % mod;
//         exp /= 2;
//     }
//     return result;
// }

// bool sieve(int n) {
//         bool primes[n + 1];
//         fill(primes, primes + n + 1, true);

//         primes[0] = primes[1] = false;

//         for (int i = 2; i * i <= n; i++) {
//                 if (primes[i]) {
//                         for (int j = i * i; j <= n; j += i) {
//                                 primes[j] = false;
//                         }
//                 }
//         }
//         if (primes[n]) return true;
//         else return
//         false;

// }
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

void solve() {
    int a, b;
    cin >> a >> b;
    int x_king, y_king;
    cin >> x_king >> y_king;
    int x_queen, y_queen;
    cin >> x_queen >> y_queen;

    set<pair<int, int>> king_hits, queen_hits;

    for (int j = 0; j < 4; j++) {
        king_hits.insert({x_king + dx[j] * a, y_king + dy[j] * b});
        king_hits.insert({x_king + dx[j] * b, y_king + dy[j] * a});

        queen_hits.insert({x_queen + dx[j] * a, y_queen + dy[j] * b});
        queen_hits.insert({x_queen + dx[j] * b, y_queen + dy[j] * a});
    }

    int ans = 0;

    for (auto& it : king_hits) {
        if (queen_hits.find(it) != queen_hits.end())
            ans++;
    }

    cout << ans << endl;
}

signed main() {
    fast_io();
    // Start Here

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
