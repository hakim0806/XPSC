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
string s;
cin>>s;
ll n = s.size();
if(n==4)
{
    cout<<s<<endl;
}
else if(n==3)
{
    cout<<'0'<<s<<endl;
}
else if(n==2){
    cout<<'0'<<'0'<<s<<endl;

}
else if(n==1)
{
        cout<<'0'<<'0'<<'0'<<s<<endl;

}
else
{
    cout<<"0000"<<endl;
}

}