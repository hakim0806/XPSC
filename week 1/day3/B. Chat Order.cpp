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
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    vector<string> v;
    set<string> st;
    vector<string> ss;
    while (t--)
    {
        cin >> s;
        v.push_back(s);
    }
    // for (string vss : v)
    // {
    //     cout << vss << endl;
    // }
    // cout << endl
    //      << endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (st.find(v[i]) == st.end())
        {
            st.insert(v[i]);
            ss.push_back(v[i]);
        }
    }
    // for (string sett : st)
    // {
    //     cout << sett << endl;
    // }
    // cout << endl
    //      << endl;
    for (string ns : ss)
    {
        cout << ns << endl;
    }
    return 0;
}