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
    int n; cin>>n;
    string s ;
    cin>>s;
    vi r_l;
    ll total = 0;
    int chang = 0;
    for(int i = 0; i<n; i++)
    {
        ll l = i;
        ll r = n-i-1;
        if(s[i] == 'L')
        {
            if(r>l)
            {
                chang++;
                total+=r;
                r_l.push_back(r-l);
            }
            else{
                total+=l;
          }
        }
        else
        {
            if(l>r)
            {
                chang++;
                r_l.push_back(l-r);
                 total += l;
            }
            else{
                total+=r;
            }
        }
        
    }
    vi ans(n+1);
        for(int i = chang; i<=n; i++)
        {
            ans[i] = total;
        }
        sort(r_l.begin(),r_l.end(), greater<int>());
        for(int i = chang-1; i>= 1; i--)
        {
            total -=r_l.back();
            r_l.pop_back();
            ans[i] = total;
        }
        for(int i = 1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
   }
    return 0;
}
