#include <bits/stdc++.h>
#include <vector>
int i, j, k;
#define ll long long
#define f1 for (int i = 0; i < t; i++)
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
int main()
{
    ll sum,pro;
    cin>>sum>>pro;
    ll cnt = 0;
    for(int i = 0; i<=sum; i++)
    {
        for(int j = 0; j<=sum-i; j++)
        {
            for(int k = 0; k<=sum-i-j; k++)
            {
                if(i*j*k<=pro)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}