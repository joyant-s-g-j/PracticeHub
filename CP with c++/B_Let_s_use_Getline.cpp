#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[1000001];
    fgets(st, 100001, stdin);
    for(int i=0;st[i]!='\\';i++)
    {
        cout<<st[i];
    }

    return 0;
}