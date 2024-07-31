#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p =1 ;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            cout << p;
        }
        else
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            cout << p;
            for (int j = 1; j <= (n * 2 - 2 * i) - 1; j++)
            {
                cout << " ";
            }
            cout << p;
            cout << '\n';
        }
        p++;
        if(p == 3)
            p = 0;
    }
    cout<<'\n';
    for (int i = n-1; i >=1; i--)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << p;
        for (int j = 1; j <= (n * 2 - 2 * i) - 1; j++)
        {
            cout << " ";
        }
        cout << p;
        cout << '\n';
        p++;
        if (p == 3)
            p = 0;
    }
    return 0;
}