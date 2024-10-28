//https://codeforces.com/problemset/problem/501/B
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

   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   map<string, string> ans, has;
   for (int i = 1;i <= n;i++) {
      string a, b;
      cin >> a >> b;
      if (has.find(a) != has.end()) {
         string s = has[a];
         ans[s] = b;
         has.erase(a);
         has[b] = s;
      }
      else {
         ans[a] = b;
         has[b] = a;
      }
   }
   cout << ans.size() << '\n';
   for (auto [x, y] : ans) {
      cout << x << " " << y << '\n';
   }

   return 0;
}