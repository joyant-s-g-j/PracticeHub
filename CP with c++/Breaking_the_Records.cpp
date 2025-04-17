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
    int hc = 0, lc = 0;
    int h = ar[0];
    int l = ar[0];
    for(int i=1; i<n; i++)
    {
        if(ar[i] < l)
        {
            l = ar[i];
            lc++;
        }
        if(ar[i] > h)
        {
            h = ar[i];
            hc++;
        }
    }
    cout<<hc<<" "<<lc;
    return 0;
}