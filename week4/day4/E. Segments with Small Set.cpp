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
    ll n, k;
    cin >> n >> k;
    vi v(n);
    v_input(v, n);
    ll ans = 0;
    ll l = 0, r = 0;
    map<int, int> mp;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() <= k)
        {
            ans += r-l+1;
        }
        else
        {
            while (mp.size() > k && l <= r)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            if (mp.size() <= k)
            {
                  ans += r-l+1;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
