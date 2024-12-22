//hints nia korchi
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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<char> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[n - 1] == '1')
        {
            cout << "NO" << endl;
            continue;
        }

        vi ans;
        ll j = n - 1;

        while (j >= 0)
        {
            ll cnt_one = 0;
            ll cnt_zero = 0;
            ll tmp = j;

            while (tmp >= 0 && arr[tmp] == '0')
            {
                cnt_zero++;
                tmp--;
            }

            while (tmp >= 0 && arr[tmp] == '1')
            {
                cnt_one++;
                tmp--;
            }

            for (ll k = 0; k < cnt_zero - 1; k++)
            {
                ans.push_back(0);
            }

            for (ll k = 0; k < cnt_one; k++)
            {
                ans.push_back(0);
            }

            ans.push_back(cnt_one);

            j = tmp;
        }
        cout << "YES" << endl;
        for (auto el : ans)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}
