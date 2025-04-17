#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        int a = 5-3;
        int b = 5-4;

        int maxA = a+x;
        int maxB = a+y;

        if(maxA == maxB || x + a >= y && y+b >= x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}