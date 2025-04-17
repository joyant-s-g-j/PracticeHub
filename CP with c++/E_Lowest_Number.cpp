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
    int min = 0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[min])
        {
            min = i;
        }
    }
    cout<<ar[min]<<" "<<min+1;
    return 0;
}