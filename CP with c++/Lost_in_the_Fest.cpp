#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t;i++)
    {
        int n;
        cin>>n;

        vector<int> ar(n);
        for(int i=0;i<n; i++)
        {
            cin>>ar[i];
        }
        int bh = ar[n-1];
        int count = 0;
        int mh = 0;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i] > mh)
            {
                mh = ar[i];
            }
            if(mh >= bh)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}