
#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long>
# define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v;
    while (true)
    {
        int x;
        cin >> x;
        if (x == 111)
        {
            break;
        }
        else
        {
            v.push_back(x);
        }
    }
    int n = v.size();
    int k;
    cin >> k;
    map<ll, int> pre_sum;
    ll sum = 0;
    ll ans = 0;
    pre_sum[0] = -1;
    ll r = 0;
    while (r < n)
    {
        sum += v[r];
        if (pre_sum.find(sum - k) != pre_sum.end())
        {
            ans = max(ans, (long long)r - pre_sum[sum - k]);
        }
        if (pre_sum.find(sum) == pre_sum.end())
        {
            pre_sum[sum] = r;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
