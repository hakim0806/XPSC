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
        int n, k;
        cin >> n >> k;
        vi v(n);
        v_input(v, n);
        // multiset<ll>ml;
        // for(int i = 0; i<n; i++)
        // {
        //     int x; cin>>x;
        //     ml.insert(x);
        // }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        vi vv;
        for (auto x : mp)
        {
            // cout<<x.first << " " <<x.second<<endl;
            if (x.second >= k)
            {
                vv.push_back(x.first);
                
            }
        }
        if(vv.empty())
        {
            cout<<-1<<endl;
            continue;
        }
        ll l = 0 , r = 0, mx = 0;
        ll ln = vv[0],rn=vv[0];
        
        // for(int x : vv)
        // {
        //     cout<<x<<" ";
        // }
        // sliding window
        while(r<vv.size())
        {
            if(r>0 && vv[r] != vv[r-1]+1)
            {
                l =r;
            }
            int len = vv[r] - vv[l];
            if(len> mx)
            {
                mx = len ;
                ln = vv[l];
                rn = vv[r];
            }
            r++;
        }
        cout<<ln<<" "<<rn<<endl;
    }
    return 0;
}
