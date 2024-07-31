#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int arr[n+1];
    int prefixsum[n+1];
    prefixsum[0] = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        prefixsum[i+1] = prefixsum[i] + arr[i];
    }

    int Q;
    cin>>Q;
    while(Q--)
    {
        int l,r;
        cin>>l>>r;

        if((prefixsum[r] - prefixsum[l-1]) == (r-l)+1)
        {
            cout<<"1\n";
        }
        else
            cout<<"0\n";
        
    }
    return 0;
}

