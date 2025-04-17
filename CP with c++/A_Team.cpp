#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x,y,z;
    int count=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>x>>y>>z;
        if(x+y+z >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}