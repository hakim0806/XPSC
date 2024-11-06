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
    int n,m,q;
    cin>>n>>m>>q;
    vi v(m);
    for(int i = 0; i<m; i++)
    {
       cin>>v[i];
    }
    sort(v.begin(),v.end());
     while(q--)
   {
    int d_p;
    cin>>d_p;
    if(d_p<v[0])
    {
        cout<<v[0]-1<<endl;//devid ekdom 1st cell e chole jabe
    }
   else if(d_p>v[m-1])
   {
    cout<<n-v[m-1]<<endl;//devid ekon last gor e 
   }
   else
   {
      auto it = lower_bound(v.begin(),v.end(),d_p);
      auto it1 = it;
      it1--;
      int left = *it1,right = *it;
      int mid = (left+right)/2;
      int f_try = abs(mid-left);
      int s_try = abs(mid-right);
      cout<<min(f_try,s_try)<<endl;
   }
   }
   }
  
    return 0;
}
