#include <bits/stdc++.h>
#define ll long long
#define f1 for (int i = 0; i < m; i++) 
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
    int n, m;
    cin >> n >> m;
 vector<pair<string,string>> vec;
   for(int i = 0; i<n; i++)
   {
    string cmp,ip;
    cin>>cmp>>ip;
    vec.push_back({cmp,ip});
   }
   for(int i = 0; i<m; i++)
   {
    string cmp,ip;
    cin>>cmp>>ip;
    ip.pop_back();
    for(int j = 0; j<n; j++)
    {
        if(ip == vec[j].second)
        {
            cout<<cmp<<" "<<ip<<";"<<" "<<"#"<<vec[j].first<<endl;
            
        }
    }
   }

    return 0;
}
