//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
  int search(string pat, string txt) {
        vector<int> p_f(256, 0);
        vector<int> s_f(256, 0);
        int n = pat.size();
        int m = txt.size(); 
        for (int i = 0; i < n; i++) {
            p_f[pat[i]]++;
            s_f[txt[i]]++;
        }
        int cnt = 0;
        if (p_f == s_f) {
            cnt++;
        } 
        int l = 0, r = n;
        while (r < m) {
            s_f[txt[l]]--;
            s_f[txt[r]]++;
            if (p_f == s_f) {
                cnt++;
            }
            l++;
            r++;
        }
        
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends