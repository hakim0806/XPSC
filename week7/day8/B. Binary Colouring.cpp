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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi ans(31, 0);
        for (int i = 0; i < 30; i++)
        {
            if (1LL & (n >> i))
            {
                if (ans[i])
                {
                    ans[i + 1] = 1;
                    ans[i] = 0;
                }
                else if (i > 0)
                {
                    if (ans[i - 1] == 1)
                    {
                        ans[i + 1] = 1;
                        ans[i - 1] = -1;
                    }
                    else
                    {
                        ans[i] = 1;
                    }
                }
                else if (i == 0)
                {
                    ans[i] = 1;
                }
            }
        }
        cout << 31 << endl;
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}