//https://codeforces.com/problemset/problem/1997/A
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
     string s,s1,s2;
     cin>>s;
     int n = s.size();
     int index = -1;
     f1{
        if(s[i] == s[i+1])
        {
           index = i;
        }
     }
     if(index == -1)
     {
        if(s.back() == 'a')  cout<<(s+"w")<<endl;
        else cout<<(s+"a")<<endl;
     }
     else 
     {
        for(int i = 0; i<=index; i++)
        {
            s1.push_back(s[i]);
        } 
        //cout<<s1<<endl;
        for(int i = index+1; i<n; i++)
        {
            s2.push_back(s[i]);
        }
        //cout<<s2<<endl;
        string t = "a";
		if(s[index] == 'a') t = "w";
        cout<<s1+t+s2<<endl;
     }
    }
    return 0;
}
