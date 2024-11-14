#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   int T;                    
   cin >> T;
   while (T--) {
      ll n, k, q;               
      cin >> n >> k >> q;

      vector<ll> a(n);
      for (int i = 0; i < n; i++) {
         cin >> a[i];
      }

      ll ans = 0;
      ll start = 0;

      for (ll i = 0; i < n; i++) {
         if (a[i] > q) {
            start = i + 1;  
         } else {
           
            ll length = i - start + 1;
            if (length >= k) {
               ll valid_count = length - k + 1;
               ans += valid_count;
            }
         }
      }

      cout << ans << endl;
   }
   return 0;
}
