#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> duplicate(1e5, 0);
class cmp
{
public:
    bool operator()(int a, int b)
    {
        if (duplicate[a] == duplicate[b])
        {
            return a < b;
        }
        else
            return duplicate[a] < duplicate[b];
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    priority_queue<int, vector<int>, cmp> a;
    while (q--)
    {
        int c;
        cin >> c;

        if (c == 1)
        {
            int x;
            cin >> x;

            if (duplicate[x] == 0)
            {
                a.push(x);
            }
            duplicate[x]++;
        }
        if (c == 2)
        {
            if (!a.empty())
            {
                int topEle = a.top();
                a.pop();
                duplicate[topEle] = 0;
                cout << topEle << '\n';
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }
    return 0;
}