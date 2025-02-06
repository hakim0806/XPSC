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
   
    ll n,q;
    cin>>n>>q;
    vi v(n);
    v_input(v,n);
    while(q--)
    {
        ll k;
        cin>>k;
        ll l =0, r = n-1, mid, ans = n;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(k==v[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else if(k<v[mid])
            {
                r=mid-1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout<< ans +1 <<endl;
    }
    return 0;
}
