#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[1000001];
    cin>>st;
    int sum = 0;
    for(int i=0;st[i]!='\0';i++)
    {
        sum = sum + (st[i] - '0');
    }
    cout<<sum;
    return 0;
}