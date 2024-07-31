#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<= n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i*4;j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout<<'\n';
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 4; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}