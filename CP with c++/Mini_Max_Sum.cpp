#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ar[5];
    for(int i=0; i<5; i++)
    {
        cin>>ar[i];
    }
    long long int nsum = LLONG_MAX;
    long long int psum = LLONG_MIN;
    for(int i=0; i<5; i++)
    { 
        long long int sum = 0;
        for(int j=0; j<5; j++)
        {
            if(j != i)
            sum += ar[j];
        }
        psum = max(psum, sum);
        nsum = min(nsum, sum);
    }
    cout<<nsum<<" "<<psum;
    return 0;
}