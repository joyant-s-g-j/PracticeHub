#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int ar[n];
    cout<<"Input values: ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    // for(int i=n-1;i>=0;i--)
    // {
    //     cout<<ar[i]<<" ";
    //     cout<<i<<" ";
    // }
    // int i=0, j=n-1;
    // while (i<j)
    // {
    //     int tmp = ar[i];
    //     ar[i] = ar[j];
    //     ar[j] = tmp;
    //     i++;
    //     j--;
    // }
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
    }
    cout<<"Reverse Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}