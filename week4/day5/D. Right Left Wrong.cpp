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
        int n;
        cin >> n;
        string s;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> s;
        vi pre(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                pre[i] = v[i];
            else
                pre[i] = pre[i - 1] + v[i];
        }
        deque<pair<int, char>> dq;
        for (int i = 0; i < n; i++)
        {
            dq.push_back({v[i], s[i]});
        }
        int l = 0, r = n - 1;
        ll ans = 0;
        while (!dq.empty())
        {
            auto f = dq.front();
            auto b = dq.back();
            if (f.second == 'L' && b.second == 'R')
            {
                if (l == 0)
                    ans += pre[r];
                else
                    ans += pre[r] - pre[l - 1];
                dq.pop_front();
                l++;
                dq.pop_back();
                r--;
            }
            else
            {
                if (f.second != 'L')
                {
                    dq.pop_front();
                    l++;
                }
                if (b.second != 'R')
                {
                    dq.pop_back();
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
