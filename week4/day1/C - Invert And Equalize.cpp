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
   cin.ignore();
   while(t--)
   {
    int n;
    cin>>n;
    string s;
    cin>>s;
    cin.ignore();
    ll cnt = 0;
    int i = 0;
    if(n == 1)
    {
        cout<<0<<endl;
        continue;
    }
    ll cnt0= 0;
    ll cnt1= 0;
    for(int i = 0; i<n-1; i++)
    {
        if(s[i] == '0' && s[i+1] == '1')
        {
            cnt1++;
        }
    }
    for(int i = 0; i<n-1; i++)
    {
        if(s[i] == '1' && s[i+1] == '0')
        {
            cnt0++;
        }
    }
    cout<<max(cnt0,cnt1)<<endl;
   }
    return 0;
}
