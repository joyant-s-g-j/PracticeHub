#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t,n,p;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int yb=0;
        int eb=0;
        for(int j=0;j<n;j++)
        {
            cin>>p;
            if(p>=250)
            {
                yb++;
            }
            else
            {
                eb++;
            }
        }
        cout<<yb<<" "<<eb<<endl;
    }
    return 0;
}
