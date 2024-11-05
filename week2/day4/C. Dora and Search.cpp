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
     while (t--) {
        int n;
        cin >> n;
        vi v(n);
        v_input(v, n);

        set<int> s;
        for (int i = 1; i <= n; i++) {
            s.insert(i);
        }
        
        int l = 1, r = n; 
        bool found = false;

        while (l <= r) {
            int mn = *s.begin();
            int mx = *s.rbegin();
            
            if (v[l - 1] == mn || v[l - 1] == mx) {
                s.erase(v[l - 1]);
                l++;
            } else if (v[r - 1] == mn || v[r - 1] == mx) {
                s.erase(v[r - 1]);
                r--;
            } else {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        } else {
            cout << l << " " << r << endl;
        }
    }
    return 0;
}