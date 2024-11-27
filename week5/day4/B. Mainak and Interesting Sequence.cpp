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
        int n,m;
        cin>>n>>m;
        vi v(n);
        if(n > m)
        {
           NO;
           continue;
        }
        else if(n%2!=0 && m%2!=0)
        {
            YES;
             ll sum = 0;
            for(int i = 0; i<n-1; i++)
            {
                v[i] = 1;
                sum +=v[i];
            }
            ll nd = m - sum;
            v[n-1] = nd;

        }
        else if(n%2==0 && m%2== 0)
        {
            YES;
            ll sum = 0;
            for(int i = 0; i<n-2; i++)
            {
                v[i] = 1;
                sum +=v[i];
            }
            ll nd = (m-sum)/2;
            v[n-1] = nd;
            v[n-2] = nd;
        }
        else if(n%2 != 0 && m%2==0)
        {
            YES;
            ll sum = 0;
            for(int i = 0; i<n-1; i++)
            {
                v[i] = 1;
                sum +=v[i];
            }
            ll nd = m - sum;
            v[n-1] = nd;
        }
        else if(n%2 == 0 && m%2!=0)
        {
           NO;
           continue;
        }
      for(int x : v)
      {
        cout<<x<<" ";
      }
      cout<<endl;
    }
    return 0;
}
