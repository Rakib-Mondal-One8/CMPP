#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i == 1 || j==n)
            {
                cout<<j;
            }
            else if (i == 1 || i == n || j == 1 || j == n)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
            // else if()
            // {
            //     cout<<i;
            // }
        }
        cout<<'\n';
    }
    return 0;
}