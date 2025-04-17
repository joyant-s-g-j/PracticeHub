#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int index;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            index = i;
            break;
        }
        if(ar[i]!=x)
        {
            index = -1;
        }
    }
    cout<<index;
    return 0;
}