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

    int n, m;
    cin >> n >> m;
    vi v1(n);
    v_input(v1, n);
    vi v2(m);
    v_input(v2, m);
    int l = 0;
    int r = 0;
    vi ans;

    while (l < n && r < m)
    {
        if (v1[l] < v2[r])
        {
            ans.push_back(v1[l]);
            l++;
        }
        else if (v1[l] == v2[r])
        {
            ans.push_back(v1[l]);
            ans.push_back(v2[r]);
            l++;
            r++;
        }
        else
        {
            ans.push_back(v2[r]);
            r++;
        }
    }
    while (l < n)
    {
        ans.push_back(v1[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(v2[r]);
        r++;
    }

    v_output(ans, ans.size());
    return 0;
}
