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
        string a, b;
        cin >> a >> b;
        deque<char> ss(a.begin(), a.end());
        deque<char> rr(b.begin(), b.end());
        if (ss.back() == 'M' || rr.back() == 'M')
        {
            if (ss.back() == 'L')
            {
                cout << ">" << endl;
            }
            else if (rr.back() == 'L')
            {
                cout << "<" << endl;
            }
            else if (ss.back() == 'S')
            {
                cout << "<" << endl;
            }
            else if (rr.back() == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (ss.back() == 'S')
            {
                if (rr.back() == 'S')
                {
                    if (ss.size() == rr.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (ss.size() > rr.size())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (rr.back() == 'S')
                {
                    cout << ">" << endl;
                }
                else
                {
                    if (ss.size() == rr.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (ss.size() > rr.size())
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
