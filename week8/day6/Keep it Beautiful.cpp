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
    cin.tie(0);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vi a(n+7);
        for(ll i=1 ; i<=n ; i++) {
            cin >> a[i];
        }
        cout << 1;
        ll pos = -1, last = a[1];
        for(ll i=2 ; i<=n ; i++) {
          if(last<=a[i]) {
            cout << 1;
            last = a[i];
          }
          else {
            if(a[1]>=a[i]) {
                cout << 1;
                last = a[i];
                pos = i+1;
                break;
            }
            else if(last<=a[i]) {
                cout << 1;
                last = a[i];
            }
            else {
                cout << 0;
            }
          }
        }
        if(pos!=-1) {
          for(ll i=pos ; i<=n ; i++) {
            if(a[1]>=a[i] && last<=a[i]) {
              cout << 1;
              last = a[i];
            }
            else {
              cout << 0;
            }
          }
        }
        cout << endl;
    }

    return 0;
}
