//https://codeforces.com/contest/1907/problem/B
#include <bits/stdc++.h>
#define ll long long
#define f1 for (int i = 0; i < n; i++) 
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
       stack<ll>sst,ct;
       string s;
       cin>>s;
        int n = s.size();
        for(int i =0; i<n; i++)
        {
            if(s[i] >= 'A' and s[i]<='Z' and s[i]!='B')
            {
                ct.push(i);
            }
            if(s[i] >= 'a' and s[i]<='z' and s[i]!='b')
            {
                sst.push(i);
            }
            if(s[i] == 'B' && !ct.empty())
            {
               s[ct.top()] = '1';
                ct.pop();
            }
              if(s[i] == 'b' and !sst.empty())
            {
               s[sst.top()] = '1'; 
                sst.pop();
            }
        }
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]!='b' and s[i] !='B' and s[i] != '1')
            {
               cout<<s[i];
            }
        }
    cout<<endl;
    }
    return 0;
}
