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
     int n,m;
     cin>>n>>m;
     vi a(n);
     vi b(m);
     v_input(a,n);
     v_input(b,m);
     ll cnt = 0;
     ll l = 0, r =0;
     ll ans = 0;
     while(l<n && r<m)
     {
        ll curr = a[l] ,cnt1=0, cnt2 =0;
        while(l<n && a[l] == curr)
        {
            cnt1++; l++;
        }
        while(r<m && curr>b[r] )
        {
            r++;
        }
        while(r<m && b[r] == curr)
        {
            cnt2++; r++;
        }
        ans += (1ll* cnt1* cnt2);
     }
     cout<<ans<<endl;
    return 0;
}
