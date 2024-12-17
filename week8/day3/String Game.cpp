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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        ll move_cnt = (n - st.size()) / 2;
        if (move_cnt % 2 == 1)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
    return 0;
}
