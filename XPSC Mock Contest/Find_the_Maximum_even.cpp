#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s;
    cin>>s;

    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    if(s == 1 && a[0] % 2 == 0)
    {
        cout<<a[0]<<endl;
        return 0;
    }
    sort(a,a+s,greater<int>());
    // bool f = false;
    int maxEven = 0;
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if ((a[i] + a[j]) % 2 == 0)
            {
                maxEven = max(maxEven,(a[i] + a[j]));
                // f = true;
            }
            if(a[i] % 2 == 0)
            {
                maxEven = max(maxEven, a[i]);
            }
            if(a[j] % 2 == 0)
            {
                maxEven = max(maxEven, a[j]);
            }
        }
    }
    cout<<maxEven<<endl;
    

    return 0;
}