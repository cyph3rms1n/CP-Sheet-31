// codeforces.com/problemset/problem/1666/D
// D. Deletive Editing

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

void solve() {
        string s, t;
        cin >> s >> t;
        int m = s.size();
        int n = t.size();
        vector < int > frequency_in_t(26, 0);

        for (int i = 0; i < n; i++) {
                frequency_in_t[t[i] - 'A']++;
        }

        for (int i = m - 1; i >= 0; i--) {
                if (frequency_in_t[s[i] - 'A'] > 0) {
                        frequency_in_t[s[i] - 'A']--;
                }
                else {
                        s[i] = '.';
                }
        }
        string ans = "";

        for (int i = 0; i < m; i++) {
                if (s[i] != '.') {
                        ans += s[i];
                }
        }
        if (ans == t) cout << "yes" << endl;
        else cout << "no" << endl;
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
