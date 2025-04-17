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
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=10)
        {
            cout<<"A["<<i<<"]"<<" "<<"="<<" "<<ar[i]<<endl;
        }
    }
    return 0;
}