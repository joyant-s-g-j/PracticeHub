#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n<3)
        {
            cout<<"LIGHT"<<endl;
        }
        else if(n>=3 && n<7)
        {
            cout<<"MODERATE"<<endl;
        }
        else if(n>=7)
        {
            cout<<"HEAVY"<<endl;
        }
    }
    return 0;
}