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
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (auto x : s)
        {
            st.insert(x);
        }
        ll mn = LLONG_MAX;
        for (auto x : st)
        {
            deque<char> dq(s.begin(), s.end());
            ll cnt = 0;
            bool non = false;
            while (dq.size() > 1)
            {
                if (dq.front() == dq.back())
                {
                    dq.pop_front();
                    dq.pop_back();
                }
                else if (dq.front() == x)
                {
                    dq.pop_front();
                    cnt++;
                }
                else if (dq.back() == x)
                {
                    dq.pop_back();
                    cnt++;
                }
                else
                {
                    non = true;
                    break;
                }
            }
            if (!non)
                mn = min(cnt, mn);
        }
        if (mn == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// #include <vector>
// int i, j, k;
// #define ll long long
// #define f1 for (int i = 0; i < n; i++)
// #define f2 for (int i = 1; i < N; i++)
// #define fr for (int i = n; i > n; i--)
// #define fre for (int i = n; i >= n; i--)
// #define f3 for (int j = 0; j < n; j++)
// #define f4 for (int j = n; j > n; j--)
// #define f5 for (int i = n - 1; i >= 0; i--)
// #define YES cout << "YES" << endl;
// #define NO cout << "NO" << endl;
// #define Yes cout << "Yes" << endl;
// #define No cout << "No" << endl;
// #define vi vector<long long>
// #define v_input(v, n)           \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         cin >> v[i];            \
//     };
// #define v_output(v, n)          \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         cout << v[i] << " ";    \
//     }                           \
//     cout << endl;
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         set<char> st;
//         for (auto x : s)
//         {
//             st.insert(x);
//         }
//         // for(auto x : st)
//         // {
//         //     cout<<x<<" ";
//         // }

//         ll mn = LLONG_MAX;
//         for (auto x : st)
//         {
//             ll l = 0;
//             ll r = s.size() - 1;
//             ll cnt = 0;
//             bool non = false;
//             while (l < r)
//             {
//                 if (s[l] == s[r])
//                 {
//                     l++;
//                     r--;
//                 }
//                 else
//                 {
//                     if (s[l] == x)
//                     {
//                         l++;
//                         cnt++;
//                     }
//                     else if (s[r] == x)
//                     {
//                         r--;
//                         cnt++;
//                     }
//                     else
//                     {
//                         non = true;
//                         break;
//                     }
//                 }
//             }
//             if (!non)
//                 mn = min(cnt, mn);
//         }
//         if (mn == LLONG_MAX)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << mn << endl;
//         }
//     }
//     return 0;
// }
