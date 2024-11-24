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
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vi v;
        for(int i = n-k; i<=n; i++)
        {
            v.push_back(i);
        }
        // for(int i : v)
        // {
        //     cout<<i<<" ";
        // }
        vi v2;
        for(int i = 1; i<=n; i++)
        {
          if (find(v.begin(), v.end(), i) == v.end())
           {
            v2.push_back(i);
           }
        }
        reverse(v2.begin(),v2.end());
        for(int i : v)
        {
            cout<<i<<" ";
        } for(int i : v2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
