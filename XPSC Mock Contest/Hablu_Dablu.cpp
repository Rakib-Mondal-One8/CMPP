#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll monsterDamage(ll n)
{
    if (n == 0)
        return 0;
    return n * (n + 1) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, H;
    cin >> n >> H;

    ll MnstrStrenght = 0;
    // vector<ll> a(n);
    int mxVal = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        // a.push_back(val);
        MnstrStrenght += val;
        mxVal = max(mxVal, val);
    }

    ll dabluDamage = monsterDamage((mxVal)-1);
    ll HealthRemain = H - dabluDamage;
    if (HealthRemain <= 0)
    {
        cout << "Dablu" << '\n';
    }
    else if (mxVal <= HealthRemain)
    {
        cout << "Hablu" << '\n';
    }
    else
    {
        cout << "Hablu" << '\n';
    }

    return 0;
}
