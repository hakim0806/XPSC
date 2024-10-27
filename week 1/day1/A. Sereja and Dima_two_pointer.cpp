/*بسم الله الرحمن الرحيم
*/
//eita age korchilam
//https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(int ar[],int n)
{
int l = 0;
int r = n-1;
int z = 0; 
int sa = 0, dai = 0;
while(l<=r)
{
if(z%2==0)
{
  if(ar[l]>ar[r])
  {
    sa +=ar[l];
    l++;
  }
  else 
  {
    sa +=ar[r];
    r--;
  }
}
else 
{
if(ar[l]>ar[r])
  {
    dai +=ar[l];
    l++;
  }
  else 
  {
    dai +=ar[r];
    r--;
  }
}
z++;
}
cout<<sa<<" "<<dai<<endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    solve(ar,n);
}
