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
#define v_input(v, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    };
#define v_output(v, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << endl;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[m + 7];
    for (ll i = 1; i <= m + 1; i++)
        cin >> a[i];
    ll ans = 0;
    for (ll i = 1; i <= m; i++)
    {
        ll x = a[i] ^ a[m + 1];
        bitset<32> bt(x);
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            if (bt[j] == 1)
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans;

    return 0;
}
