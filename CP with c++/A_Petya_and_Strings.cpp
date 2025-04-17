#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,j;
    cin>>s>>j;
    for(int i=0;i<s.size();i++)
    {
        s[i]=towlower(s[i]);
        j[i]=towlower(j[i]);
    }
    if(s==j)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<j[i])
            {
                cout<<"-1"<<endl;
                break;
            }
            if(s[i]>j[i])
            {
                cout<<"1"<<endl;
                break;
            }
        }
    }
    return 0;
}