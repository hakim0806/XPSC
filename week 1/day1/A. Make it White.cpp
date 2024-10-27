//https://codeforces.com/problemset/problem/1927/A
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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int len;
        cin >> len;
        string s;
        cin >> s;
        int index1 = -1, index2 = -1;
        for(int i = 0; i < len; i++) {
            if(s[i] == 'B') {
                index1 = i;
                break;
            }
        }
        for(int i = len - 1; i >= 0; i--) {
            if(s[i] == 'B') {
                index2 = i;
                break;
            }
        }
        if(index1 == -1 || index2 == -1) {
            cout <<"0"<<endl;
        } else {
            int l = index2 - index1 + 1;
            cout << l;
            cout<<endl;
        }
    }
 
    return 0;
}