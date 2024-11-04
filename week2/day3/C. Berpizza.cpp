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
    int q;
    cin >> q;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vi v;
    int customer = 1;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int m;
            cin >> m;
            s.insert({customer, m});
            ml.insert({m, -customer});
            customer++;
        }
        else if (op == 2)
        {
            int pos = s.begin()->first, tk = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ml.erase({tk, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, tk = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, tk});
        }
    }

    //    for(auto it = s.begin(); it!=s.end(); it++)
    //     {
    //         cout<<it->first<<","<<it->second<<" ";
    //     }
    //     cout<<endl<<endl;
    //     for(auto it = ml.begin(); it!=ml.end(); it++)
    //     {
    //         cout<<it->first<<","<<it->second<<" ";
    //     }
    //     cout<<endl<<endl;
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    v_output(v, v.size());
    return 0;
}
