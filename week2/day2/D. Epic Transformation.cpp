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
#define v_input(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        v.push_back(x);                \
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
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i = 0; i<n; i++)
        {
            int x; cin>>x;
           mp[x]++;
        }
    //   for (auto it = mp.begin(); it != mp.end(); ++it) {
    // cout << it->first << " " << it->second << endl;
    // }
    priority_queue<int>pq;
    for(auto i: mp)
    {
        pq.push(i.second);
    }
    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }
    while(pq.size()>=2)
    {
       int a = pq.top();
       pq.pop();
       int b = pq.top();
       pq.pop();
       a--;
       b--;
       if(a>0) pq.push(a);
       if(b>0) pq.push(b);
    }
    if(pq.empty())
    {
        cout<<0<<endl;
    }
    else{
        cout<<pq.top()<<endl;
    }
    }
    return 0;
}
