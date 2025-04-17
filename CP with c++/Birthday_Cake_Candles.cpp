#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    
    int max_val = *max_element(ar.begin(), ar.end());
    int c = count(ar.begin(), ar.end(), max_val);
    
    cout<<c;
    return 0;
}