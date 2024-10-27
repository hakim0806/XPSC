//https://codeforces.com/contest/44/problem/A
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int cnt;
    map<pair<string,string>,bool> mp;
    f1
    {
        string a,b;
        cin>>a>>b;
        mp[{a,b}] = true;
    }
    // for(auto value : mp)
    // {
    //     pair<string,string> p = value.first;
    //     bool ok = value.second;
    //     cout<<p.first <<" "<<p.second<<" "<<ok<<endl;
    // }
   cout<<mp.size()<<endl;

}