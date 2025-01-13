#include <bits/stdc++.h>
#include <vector>
int i, j, k;
#define ll long long
#define f1 for (int i = 0; i < n; i++)
#define f2 for (int i = 1; i < N; i++)
#define fr for (int i = n; i > n; i--)
#define fre for (int i = n; i >= n; i--)
#define f3 for (int j = 0; j < n; j++)
#define f4 for (int j = n; j > n; j--)
#define f5 for (int i = n - 1; i >= 0; i--)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
#define v_input(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cin>>v[i];             \
                       \
                       \
    };
#define v_output(v, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << endl;
using namespace std;
bool isPrime(int n) {
   if (n == 1) {
      return false;
   }

   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;

   if (isPrime(n)) {
      cout << 1 << '\n';
   }
   else if (n % 2 == 0) {
      cout << 2 << '\n';
   }
   else {
      if (isPrime(n - 2)) {
         cout << 2 << '\n';
      }
      else {
         cout << 3 << '\n';
      }
   }

   return 0;
}
