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

   int t;
   cin >> t;
   while (t--) {
      int n, q;
      cin >> n >> q;
      vector<int> a(n), prefix(n + 1);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      sort(a.rbegin(), a.rend());
      for (int i = 1;i <= n;i++) {
         prefix[i] = prefix[i - 1] + a[i - 1];
      }
      for (int i = 0;i < q;i++) {
         int k, ans = -1;
         cin >> k;
         auto it = lower_bound(prefix.begin(), prefix.end(), k);
         if (it != prefix.end()) {
            ans = it - prefix.begin();
         }
         cout << ans << '\n';
      }
   }
   return 0;
}