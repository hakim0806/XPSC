#include <bits/stdc++.h>
#include <vector>
#define ll long long
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
        ll n;
        cin >> n;

        vi v(n);
        v_input(v, n);
        vi ck1, ck2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ck1.push_back(v[i]);
            }
            else
            {
                ck2.push_back(v[i]);
            }
        }

        ll G1 = 0, G2 = 0;

        for (int i = 0; i < ck1.size(); i++)
        {
            G1 = __gcd(G1, ck1[i]);
        }
        for (int i = 0; i < ck2.size(); i++)
        {
            G2 = __gcd(G2, ck2[i]);
        }

        bool ok = true;
        for (int i = 1; i < n; i += 2) 
        {
            if (v[i] % G1 == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << G1 << endl;
            continue;
        }

        ok = true;
        for (int i = 0; i < n; i += 2) 
        {
            if (v[i] % G2 == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << G2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
