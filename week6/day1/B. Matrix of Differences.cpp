// by hint
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
        int x = 1, y = n * n;
        vi v;
        for (int i = 1; i <= n * n; i++)
        {
            if (i % 2 == 1)
            {
                v.push_back(x);
                x++;
            }
            else
            {
                v.push_back(y);
                y--;
            }
        }
        x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = x; j < x + n; j++)
                    cout << v[j] << " ";
                cout << endl;
                x += n;
            }
            else
            {
                for (int j = (n + x) - 1; j >= x; j--)
                    cout << v[j] << " ";
                cout << endl;
                x += n;
            }
        }
    }
    return 0;
}
