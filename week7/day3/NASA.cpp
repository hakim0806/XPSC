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
#define v_input(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cin>>v[i];             \
                       \
                       \
    };
#define v_output(v, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << endl;
using namespace std;
const int maxN = (1LL << 15);
vector<int> allPalindrome;
bool isPalindrome(int x) {
   string s = to_string(x);
   int len = s.size();
   for (int i = 0;i < len / 2;i++) {
      if (s[i] != s[len - i - 1]) {
         return false;
      }
   }
   return true;
}

void markPalindrome() {
   for (int i = 0;i < maxN;i++) {
      if (isPalindrome(i)) {
         allPalindrome.push_back(i);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   markPalindrome();

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> a(n), cnt(maxN + 1);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         cnt[a[i]]++;
      }

      long long ans = n;
      for (int i = 0;i < n;i++) {
         for (int j = 0;j < allPalindrome.size();j++) {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
         }
      }

      cout << (ans / 2) << endl;
   }
   return 0;
}