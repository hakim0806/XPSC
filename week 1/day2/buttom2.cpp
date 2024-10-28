#include <bits/stdc++.h>
#define ll long long
#define f1 for (int i = 0; i < m; i++) 
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define vi vector<long long>
using namespace std;
int main() {

ll n,m;
cin>>n>>m;
ll once = n +(n-1);
//cout<<once<<endl;
ll twice = m +(m-1);
//cout<<twice<<endl;
ll ans = n+m;
cout<<max({once,twice,ans})<<endl;
}