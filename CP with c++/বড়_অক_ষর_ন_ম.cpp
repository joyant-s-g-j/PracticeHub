#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == tolower(s[j]))
            {
                s[j] = toupper(s[j]);
            }
            else
            {
                s[j] = toupper(s[j]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
