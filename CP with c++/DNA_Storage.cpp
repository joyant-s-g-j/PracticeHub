#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j=j+2)
        {
            string p = s.substr(j, 2);
            if(p=="00")
            {
                cout<<"A";
            }
            else if(p=="01")
            {
                cout<<"T";
            }
            else if(p=="10")
            {
                cout<<"C";
            }
            else if(p=="11")
            {
                cout<<"G";
            }
        }
        cout<<endl;
    }
    return 0;
}