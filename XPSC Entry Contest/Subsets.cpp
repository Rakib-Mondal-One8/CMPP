#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int const N = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        ll a[n];
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        ll want = (total + d) / 2;
        if (total < d || (total + d) % 2 != 0)
        {
            cout << 0%N<<'\n';
            continue;
        }
        vector<vector<ll>> dp(n+1,vector<ll>(want+1,0));
        dp[0][0] = 1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=want;j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = (dp[i-1][j-a[i-1]] + dp[i-1][j]) % N;
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        cout << dp[n][want] << '\n';
    }
    return 0;
}