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
#define vi vector<ll>
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
ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));
    cout << ans << endl;
    return 0;
}