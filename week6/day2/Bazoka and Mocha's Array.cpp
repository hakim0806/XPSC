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
    }
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
        ll n;
        cin >> n;
        vi a(n);
        v_input(a, n);
        vi v;
        ll mn = a[0];
        v.push_back(a[0]);
        ll idx = -1;
        for (int i = 1; i < n; i++)
        {
            if (mn <= a[i])
            {
                mn = a[i];
                v.push_back(mn);
            }
            else
            {
                idx = i;
                break;
            }
        }
        vi ans;
        if (idx != -1)
        {
            for (int i = idx; i < n; i++)
            {
                ans.push_back(a[i]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i]);
        }
        if (is_sorted(ans.begin(), ans.end()))
        {
            Yes;
        }
        else
        {
            No;
        }
    }
    return 0;
}
