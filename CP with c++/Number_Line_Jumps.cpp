#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lone, jone, ltwo, jtwo;
    cin>>lone>>jone>>ltwo>>jtwo;
    if (lone<jone && jone<jtwo)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<=10000; i++)
    {
        if(lone == ltwo)
        {
            cout<<"YES";
            return 0;
        }
        lone += jone;
        ltwo += jtwo;
        if ((jone > jtwo && lone > ltwo) || (jtwo > jone && ltwo > lone)) {
            break;
        }
    }
    cout<<"NO";
    
    return 0;
}