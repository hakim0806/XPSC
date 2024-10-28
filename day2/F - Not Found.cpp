#include <bits/stdc++.h>
#define ll long long
#define f1 for (int i = 0; i < n; i++)
#define f2  for (int j = 0; j <= n; j++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s ;
    cin>>s;
    string al = {"abcdefghijklmnopqrstuvwxyz"};
    set<char>st;
    for(char ch : s)
    {
        st.insert(ch);
    }
    bool f = false;
    string ans ;
    for(int i = 0; i<26; i++)
    {
        auto it = st.find(al[i]);
        if(it ==st.end())
        {
            f = true;
            ans.push_back(al[i]);
            break;
        }
    }
    if(f) cout<<ans<<endl;
    else cout<<"None"<<endl;
}