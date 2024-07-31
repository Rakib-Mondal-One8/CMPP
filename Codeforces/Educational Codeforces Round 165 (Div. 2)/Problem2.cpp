#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        ll cost = 0;
        int l = 0, r = 0, n = s.size();
        while (r < n)
        {
            while (s[l] == '0' && l < n)
            {
                l++;
            }
            if (r < l)
                r = l;
            while (s[r] != '0' && r < n)
            {
                r++;
            }
            if (s[l] == '1' && s[r] == '0')
                cost += (r - l + 1);
            swap(s[l], s[r]);
            l++;
            r++;
        }
        cout << cost << nl;
    }
    return 0;
}