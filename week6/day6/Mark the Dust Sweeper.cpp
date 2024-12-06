#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        reverse(v.begin(), v.end());
        while (!v.empty())
        {
            if (v.back() != 0)
                break;
            else
            {
                v.pop_back();
            }
        }
        if (v.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == 0)
            {
                ans++;
            }
            else
            {
                ans += v[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
