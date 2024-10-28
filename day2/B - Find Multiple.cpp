#include <bits/stdc++.h>
#define ll long long
#define f1 for (int i = 0; i < m; i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
using namespace std;
int main()
{

    ll n, m, c;
    cin >> n >> m >> c;
    ll cnt = 0;
    bool f = false;
    ll num ; 
    for (ll i = n; i <= m; i++)
    {
        if (i % c == 0)
        {
            f = true;
           num = i;
           break;
        }
     
    }
    if(f) cout<<num<<endl;
    else cout<<-1<<endl;
}