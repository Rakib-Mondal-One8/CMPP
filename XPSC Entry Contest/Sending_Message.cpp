#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    string s2;

    while (cin >> s1 >> s2)
    {
        int j = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s2.empty())
                break;
            if (s1[i] == s2[j])
                j++;
        }
        if (s2.size() == j)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}