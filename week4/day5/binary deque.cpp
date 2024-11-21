//hint lagche.
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
        ll n, k;
        cin >> n >> k;
        vi a(n);
        v_input(a,n);
        ll sum = accumulate(a.begin(), a.end(), 0);
        if (sum < k)
        {
            cout << -1 << endl;
            continue;
        }
        vi lstone(n + 1, n);
        ll last = n;
        for (int i = n - 1; i >= 0; i--)
        {
            lstone[i] = last;
            if (a[i] == 1)
            {
                last = i;
            }
        }
    //    for(int  i : lstone)
    //    {
    //     cout<<i<<" ";
    //    }
    //    cout<<endl<<endl;
        ll ans = 1e9;
        ll curr = 0;
        ll L = 0, r = 0;
        queue<ll> q;
        while (r < n)
        {
            q.push(a[r]);
            curr += a[r];
            if (curr == k)
            {
                ans = min(ans, L + (n - lstone[r]));
            }
            else
            {
                //contibition remove
                while (!q.empty() && curr > k)
                {
                    curr -= q.front();
                    q.pop();
                    L++;
                }
                if (curr == k)
                {
                    ans = min(ans, L + (n - lstone[r]));
                }
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}
