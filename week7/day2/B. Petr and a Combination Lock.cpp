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
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   vi a(n);
   v_input(a,n);
   bool ok = false;
   for (int mask = 0;mask < (1 << n);mask++) {
      int sum = 0;
      for (int k = 0;k < n;k++) {
         if ((mask >> k) & 1) {
            sum += a[k];
         }
         else {
            sum -= a[k];
         }
      }

      if (sum % 360 == 0) {
         ok = true;
         break;
      }
   }

   if (ok) {
      cout << "YES" << '\n';
   }
   else {
      cout << "NO" << '\n';
   }

   return 0;
}