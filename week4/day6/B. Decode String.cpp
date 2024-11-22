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
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s;
     cin>>s;
     deque<char>dq;
     for(int i = 0; i<n; i++)
     {
        dq.push_back(s[i]);
     }
    //  while(!dq.empty())
    //  {
    //     cout<<dq.front();
    //     dq.pop_front();
    //  }
    string tt;
       while(!dq.empty())
       {
        char b = dq.back();
        dq.pop_back();
        if(b!='0')
        {
           int nm = (b-'0');
          // cout<<nm+96<<endl;
           tt.push_back(char(nm+96));
          // break;
        }
        else if(b == '0')
        {
            char bb = dq.back();
            dq.pop_back();
            char bbb = dq.back();
            dq.pop_back();
            int nmm = (bbb-'0')*10 + (bb-'0');
            tt.push_back(char(nmm+96));
        }
       }
       reverse(tt.begin(),tt.end());
       for(char i : tt)
       {
        cout<<i;
       }
       cout<<endl;
    }
    return 0;
}
