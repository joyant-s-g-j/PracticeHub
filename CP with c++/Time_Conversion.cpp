#include<bits/stdc++.h>
using namespace std;

int main()
{
    string time;
    cin>>time;

    int hr = stoi(time.substr(0, 2));
    int min = stoi(time.substr(3, 2));
    int sec = stoi(time.substr(6, 2));
    string prd = time.substr(8, 2);

    if(prd=="AM")
    {
        if(hr == 12)
        {
            hr = 00;
        }
    }
    else
    {
        if(hr != 12)
        {
            hr += 12;
        }
    }
    printf("%02d:%02d:%02d", hr, min, sec);
    return 0;
}