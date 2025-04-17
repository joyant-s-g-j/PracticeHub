#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   
    int count=0;
    for(int i=-n;i<=n;i++)
    {
        double me=pow(4,abs(i));
        if(i<0)
        {
            cout<<"1/"<<me<<" ";
        }
        if(i>=0)
        {
            cout<<me<<" ";
        }
        count++;
        if(count==3)
        {
            cout<<endl;
            count=0;
        }
    }
    return 0;
}
