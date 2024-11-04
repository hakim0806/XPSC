#include <bits/stdc++.h>
#include <vector>
int i, j, k;
#define ll long long
#define f1 for (int i = 0; i < n; i++)
#define f2 for (int i = 1; i <= n; i++)
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
#define v_input(v, n)             \
    for (int i = 1; i <= n; i++) \
    {                           \
        cin>>v[i];             \
                       \
                       \
    };
#define v_output(v, n)            \
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
   cin>>t;
   while (t--)
    {
        int n,q;
        cin >> n >>q;
        vi v(n+1);
        v_input(v, n);
        map<int, set<int>> mp;
        f2
        {
            mp[v[i]].insert(i);
        }

        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " ";
        //     for (int val : it->second)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }
       while(q--)
       {
        int s,e;
        cin>>s>>e;
        //cout<<"hello"<<endl;
        if((mp.find(s) == mp.end()) || (mp.find(e) == mp.end()))
        {
            NO;
           // cout<<"hello"<<endl;
        }
        else{
            int s_index,e_index;
             s_index = *mp[s].begin();
             e_index = *mp[e].rbegin();
            if(e_index>s_index)
            {
                YES;
            }
            else{
                NO;
            }
        }
       }
    }
    return 0;
}