#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<bool> freq(N+5,false);
        for(int i=1;i<=n;i++)
        {
            int val;
            cin>>val;
            freq[val] = true;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if(freq[i] == false)
            {
                cnt++;
            }
        }
        if(k >= cnt)
        {
            cout<<"YES"<<'\n';
        }
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}