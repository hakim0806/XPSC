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
        vi v(n);
        v_input(v, n);
        bool inre = false;
        ll inre_el = -1;
        ll inre_index = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                inre = true;
                inre_el = v[i + 1];
                inre_index = i + 1;
                break;
            }
        }
        string s(n, '0');
        if (!inre)
        {

            fill(s.begin(), s.end(), '1');
        }
        else
        {
            for (int i = 0; i <= inre_index; i++)
            {
                s[i] = '1';
            }
            for (int i = inre_index + 1; i < n; i++)
            {
                if (v[i] <= v[0] && v[i] >= inre_el)
                {
                    s[i] = '1';
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
