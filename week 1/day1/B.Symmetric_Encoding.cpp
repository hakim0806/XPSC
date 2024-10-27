//https://codeforces.com/contest/1974/problem/B
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
#define f5  for (int i = n - 1; i >= 0; i--)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
     ll n;
     cin>>n;
     string s;
     cin>>s;
     set<char>ns;
     f1
     {
        ns.insert(s[i]);
     }
    //  for(auto c : ns)
    //  {
    //     cout<<c;
    //  }
    //  cout<<endl;
     vi v;
     for(auto &c : ns)
     {
        v.push_back(c);
     }
    //  for(auto &c:v)
    //  {
    //     cout<<(char)c;
    //  }
    //  cout<<endl;
     map<char,char>mp;
     for(int i = 0; i<v.size(); i++)
     {
        mp[v[i]] = v[v.size()-i-1];
     }
     f1
     {
        cout<<mp[s[i]];
     }
     cout<<endl;
    }

    return 0;
}
