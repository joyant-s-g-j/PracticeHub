#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<n; i++)
    {
        int chkO = ar[i]+1;
        int chkT = ar[i]+2;
        if(chkO % 5 == 0 && ar[i] >= 38)
        {
            ar[i] = chkO;
        }
        else if(chkT % 5 == 0 && ar[i] >= 38)
        {
            ar[i] = chkT;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}