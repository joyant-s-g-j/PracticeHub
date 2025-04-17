#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s,j;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I')
        {
            continue;
        }
        else
        {
            j+='.';
            j+=towlower(s[i]);
        }
        
    }
    cout<<j<<endl;
    return 0;
}