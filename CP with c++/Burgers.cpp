#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<a<<endl;
        }
        else if(a<b)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
    return 0;
}