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
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n, q;
        cin >> n >> q;
        vi v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vi pre(n + 2, 0);
        // pre[0] = v[0];
        for (int i = 1; i <= n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        // for(auto x : pre)
        // {
        //     cout<< x <<" ";
        // }
        vector<pair<ll, ll>> k(q);
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        ll idx = 0;
        vi ans(q);
        for (int i = 0; i < q; i++)
        {
            while (idx < n && v[idx + 1] <= k[i].first)
            {
                idx++;
            }

            ans[k[i].second] = pre[idx];
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
