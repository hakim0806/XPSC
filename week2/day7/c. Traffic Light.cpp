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
#define v_input(v, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    };
#define v_output(v, n)          \
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
    cin >> t;
    while (t--)
    {
        int n;
        string x;
        cin >> n >> x;
        string s;
        cin >> s;
        s += s;
        if (x[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        int cnt = 0;
        bool f = false;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'g')
            {
                ans = max(cnt,ans);
                f = false;    
            }
            if(s[i] == x[0] && f == false)
            {
               f = true;
               cnt = 0;
            }
            if(f) cnt++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
