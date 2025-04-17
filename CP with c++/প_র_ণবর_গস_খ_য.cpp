#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        int count=0;
        for(int j=1;j<=n;j++)
        {
            int sqr=j*j;
            if(sqr<=n)
            {
                cout<<sqr<<" ";
                count++;
            }
            if(count==5)
            {
                cout<<endl;
                count=0;
            }
        }
        cout<<endl;
    }
    return 0;
}