#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, k;
        cin>>n>>k;
        vector<int> ar(n), arr(n);

        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++) cin>>arr[i];

        int tm = 0;

        for(int i=0; i<n; i++)
        {
            tm += abs(ar[i] - arr[i]);
        }

        if(tm > k || (k - tm) % 2 != 0 )
        {
            cout<<"No\n";
        }
        else 
        {
            cout << "Yes\n";
        }
    }
    return 0;
}