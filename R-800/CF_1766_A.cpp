// codeforces.com/problemset/problem/1766/A
// Extremely Round
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

bool checker(int x) {
        int digitCount = 0;
        int zeroCount = 0;

        while (x) {
                if (x % 10 == 0)
                        zeroCount++;
                digitCount++;
                x /= 10;
        }
        return zeroCount == digitCount - 1;

}

void solve(vector < int > roundNumbers) {
        int n;
        cin >> n;
        int answer = 0;

        for (int i = 0; i < roundNumbers.size(); i++) {
                if (roundNumbers[i] <= n)
                        answer++;
                else
                        break;
        }
        cout << answer << endl;
}

signed main() {
        fast_io();
        
        // Precomputation 
        vector < int > roundNumbers;

        for (int i = 0; i <= 999999; i++) {
                if (checker(i))
                        roundNumbers.push_back(i);
        }
        int t;
        cin >> t;
        while (t--) {
                solve(roundNumbers);
        }
        return 0;
}
