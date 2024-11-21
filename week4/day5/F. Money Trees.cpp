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
        int n, k;
        cin >> n >> k;
        vi v1(n);
        vi v2(n);
        v_input(v1, n);
        v_input(v2, n);
        vector<pair<int, int>> pr;
        for (int i = 0; i < n; i++)
        {
            pr.push_back({v1[i], v2[i]});
        }
        ll ans = LLONG_MIN, sum = 0;
        ll l = 0, r = 0;
        while (r < n)
        {
            sum += pr[r].first;
            while (l <= r && sum > k)
            {
                sum -= pr[l].first;
                l++;
            }
            if (r > 0)
            {
                if (l < r && pr[r - 1].second % pr[r].second != 0)
                {
                    l = r;
                    sum = pr[r].first;
                }
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}
