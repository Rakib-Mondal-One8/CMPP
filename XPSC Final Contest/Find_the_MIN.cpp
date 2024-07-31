#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> a;
    vector<bool> duplicate(1e9, false);
    while (q--)
    {
        int c;
        cin >> c;

        if (c == 1)
        {
            int x;
            cin >> x;

            if(duplicate[x] == false)
            {
                a.push(x);
                duplicate[x] = true;
            }
            
        }
        if (c == 2)
        {
            if (!a.empty())
            {
                cout << a.top() << '\n';
                duplicate[a.top()] = false;
                a.pop();    
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }
    return 0;
}