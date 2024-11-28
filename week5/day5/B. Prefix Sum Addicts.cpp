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
        vi ps(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++)
        {
            cin >> ps[i];
        }
        if (n == 1 || k == 1)
        {
            Yes;
            continue;
        }
        vi v(n + 1);
        for (int i = n; i >= n - k + 2; i--)
        {
            v[i] = ps[i] - ps[i - 1];
        }
        bool valid = true;
        for (int i = n - k + 2; i <= n; i++)
        {
            if (i + 1 <= n && v[i + 1] < v[i])
            {
                valid = false;
                break;
            }
        }
        if (!valid)
        {
            No;
            continue;
        }
        for (int i = n - k + 1; i > 1; i--)
        {
            v[i] = v[i + 1];
            ps[i - 1] = ps[i] - v[i];
        }
        v[1] = ps[1];
        for (int i = 1; i <= n; i++)
        {
            if (i + 1 <= n && v[i + 1] < v[i])
            {
                valid = false;
                break;
            }
        }

        if (valid)
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