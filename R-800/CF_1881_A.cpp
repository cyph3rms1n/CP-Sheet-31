////////////////////////////////////////////////////////////////////////////////////////
// codeforces.com/problemset/problem/1881/A
// Don't Try to Count
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

//prime factorization 
// void primeFactorization(int n){
//     int count = 0
//     while(n % 2 == 0){
//         count ++;
//         n /= 2;
//     }
//
//     for(int i =3;i<sqrt(n);i+=2){
//         while(n % i == 0){
//             count ++;
//             x /= i;
//         }
//     }
//     return count;
// }

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
bool check(string s, string x) {
        if (s.size() > x.size()) return false;

        for (int i = 0; i < x.size() - s.size() + 1; i++) {
                if (x.substr(i, s.size()) == s) return true;
        }
        return false;
}
void solve() {
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;
        string s;
        cin >> s;

        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        int ans = -1;

        if (check(s, x0)) ans = 0;
        else if (check(s, x1)) ans = 1;
        else if (check(s, x2)) ans = 2;
        else if (check(s, x3)) ans = 3;
        else if (check(s, x4)) ans = 4;
        else if (check(s, x5)) ans = 5;

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
///////////////////////////////////////////////////////////////////////////////////////
