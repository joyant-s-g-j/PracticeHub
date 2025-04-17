#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int min = 0, max = 0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[max])
        {
            max = i;
        }
        if(ar[i]<ar[min])
        {
            min = i;
        }
    }
    swap(ar[max], ar[min]);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}