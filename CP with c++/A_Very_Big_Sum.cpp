#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + ar[i];
    }
    cout<<sum;
    return 0;
}