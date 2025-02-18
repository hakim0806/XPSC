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
        ll n,k;
        cin>>n>>k;
        vi v(n);
        v_input(v,n);
        if(v[0] == v[n-1])
        {
            ll cnt = 0;
            bool y = false;
            for(int i = 0; i<n; i++)
            {
                if(v[i] == v[0]) cnt++;
                if(cnt%k == 0)
                {
                    y = true;
                    break;
                }
            }
            if(y) {
                YES
            }
            else
            {
                NO
            }
        }
        else
        {
               ll f_idx = -1;
               ll l_idx = -1;
               ll cnt = 0;
               for(int i = 0; i<n; i++)
               {
                if(v[i] == v[0]) cnt++;
                if(cnt%k == 0)
                {
                    f_idx = i;
                    break;
                }
               }
                for(int i = n-1; i>=0; i--)
               {
                if(v[i] == v[n-1]) cnt++;
                if(cnt%k == 0)
                {
                    l_idx = i;
                    break;
                }
               }
               if( f_idx != -1 and l_idx !=-1 and f_idx < l_idx)
               {
                YES
               }
               else
               {
                NO
               }
        }

    }
   
   
    return 0;
}
