#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}