#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }

    int ap = 0;
    int bp = 0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i]) ap++;
        else if(a[i]<b[i]) bp++;
    }
    cout<<ap<<" "<<bp;    
    return 0;
}