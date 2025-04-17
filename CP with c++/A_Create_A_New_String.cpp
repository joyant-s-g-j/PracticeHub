#include<bits/stdc++.h>
using namespace std;

int main()
{
    char sone[1001];
    cin>>sone;
    char stwo[1001];
    cin>>stwo;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;sone[i]!='\0';i++)
    {
        count1++;
    }
    for(int i=0;stwo[i]!='\0';i++)
    {
        count2++;
    }
    cout<<count1<<" "<<count2<<endl;
    cout<<sone<<" "<<stwo;
    
    return 0;
}