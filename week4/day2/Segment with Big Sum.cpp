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
    int n; 
    ll k;
    cin >> n >> k;
    vi v(n);
    v_input(v, n);
    int l = 0, r = 0;
    int ans = INT_MAX;
    ll sum = 0;
     for (int i = 0; i < v.size(); i++) 
     {
        sum += v[i];
        if (sum < k) continue;
        while (sum >= k)
         {
            sum -= v[l];
            l++;
        }
        ans = min(ans, i - l + 2);
    }
    if (ans > n) ans = -1;
    cout << ans << endl; 
    return 0;
}