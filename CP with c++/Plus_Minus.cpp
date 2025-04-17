#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    float pos = 0;
    float neg = 0;
    float z = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            pos++;
        }
        else if(ar[i]<0)
        {
            neg++;
        }
        else
        {
            z++;
        }
    }
    float div1 = pos/n;
    printf("%.6f\n", div1);
    float div2 = neg/n;
    printf("%.6f\n", div2);
    float div3 = z/n;
    printf("%.6f\n", div3);
    return 0;
}