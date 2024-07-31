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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        map<int, int> mp;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        priority_queue<int> q;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            q.push(it->second);
        }
        while (q.top() >= k && !q.empty())
        {
            if (q.top() > k)
            {
                int freq = q.top();
                q.pop();
                freq -= k;
                freq += (k - 1);
                q.push(freq);
            }
            else if (q.top() == k)
            {
                if (q.size() == 1)
                {
                    int freq = q.top();
                    q.pop();
                    q.push(k - 1);
                }
                else
                {
                    q.pop();
                    int freq = q.top();
                    q.pop();
                    q.push(freq + k - 1);
                }
            }
            else
                break;
        }
        int cards = 0;
        while (!q.empty())
        {
            cards += q.top();
            q.pop();
        }
        cout << cards << nl;
    }
    return 0;
}