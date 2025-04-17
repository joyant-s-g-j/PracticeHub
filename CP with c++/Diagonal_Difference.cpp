#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    m=n;
    int ar[n][m];
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<m; j++)
        {
            cin>>ar[i][j];
        }
    }
    // left diagonal
    int suml = 0;
    for(int i=0, j=0; i<n; i++, j++)
    {
        suml += ar[i][j];
    }
    
    //right diagonal
    int sumr = 0;
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        sumr += ar[i][j];
    }
    cout<<abs(suml-sumr);
    
    // for(int i=0;i<n; i++)
    // {
    //     for(int j=0;j<m; j++)
    //     {
    //         cout<<ar[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}