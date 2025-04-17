#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    return(a * b) / __gcd(a, b);
}
int findLCM(vector<int> ar)
{
    int result = ar[0];
    for(int i=0; i<ar.size(); i++)
    {
        result = LCM(result, ar[i]);
    }
    return result;
}
int findGCD(vector<int> ar)
{
    int result = ar[0];
    for(int i=0; i<ar.size(); i++)
    {
        result = __gcd(result, ar[i]);
    }
    return result;
}
int main()
{
    int a, b;
    cin>>a>>b;
    vector<int> ar(a), arr(b);
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }

    int lcm = findLCM(ar);
    int gcd = findGCD(arr);
    
    int count = 0;
    for(int i=lcm; i<=gcd; i += lcm)
    {
        if(gcd % i == 0) count++;
    }
    cout<<count;
    return 0;
}