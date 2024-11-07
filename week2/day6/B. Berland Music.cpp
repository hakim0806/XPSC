#include <bits/stdc++.h>
using namespace std;

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
        vi p(n);
        v_input(p, n);
        string s;
        cin >> s;
        map<int, vector<int>> l_m, d_m;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l_m[p[i]].push_back(i);
            }
            else
            {
                d_m[p[i]].push_back(i);
            }
        }
         for(auto x : l_m)
        {
            cout << x.first << "->";
            for(auto v : x.second)
            {
                cout << v << " ";
            }
            cout << endl;
        }
         cout<<endl<<endl;
        for(auto x : d_m)
        {
            cout << x.first << "->";
            for(auto v : x.second)
            {
                cout << v << " ";
            }
            cout << endl;
        }

        vi q(n, -1);
        int num = 1;
        for (auto entry : d_m)
        {
            for (int idx : entry.second)//0 5 4 6
            {                   // 0 5 4 6
                q[idx] = num++;//  1 2 3 4
            }
        }
        for (auto entry : l_m)
        {
            for (int idx : entry.second)//2 1 7 3
             {                         // 5 6 7 8
                q[idx] = num++;
            }
        }

        v_output(q, n);// 0 1 2 3 4 5 6 7 
    }                 //  1 6 5 8 3 2 4 7

    return 0;
}
