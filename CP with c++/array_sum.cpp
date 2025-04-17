#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"input array size: ";
    cin>>n;
    int ar[n];
    cout<<"input array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + ar[i];
    }
    cout<<"Sum of array: "<<sum;
    return 0;
}