#include<bits/stdc++.h>
using namespace std;

int main()
{
    int home_start, home_end, ap_pos, or_pos, ap_cnt, or_cnt;
    cin>>home_start>>home_end;
    cin>>ap_pos>>or_pos;
    cin>>ap_cnt>>or_cnt;
    int ap_ar[ap_cnt];
    int or_ar[or_cnt];
    for(int i=0; i<ap_cnt;i++)
    {
        cin>>ap_ar[i];
    }
    for(int i=0; i<or_cnt;i++)
    {
        cin>>or_ar[i];
    }
    int ap_sum = 0;
    int or_sum = 0;

    for(int i=0; i<ap_cnt; i++)
    {
        int ap_chk = ap_pos + ap_ar[i];
        if(ap_chk >= home_start && ap_chk <= home_end)
        {
            ap_sum++;
            
        }
        ap_chk = 0;
    }
    for(int i=0; i<or_cnt; i++)
    {
        int or_chk = or_pos + or_ar[i];
        if(or_chk >= home_start && or_chk <= home_end)
        {
            or_sum++;
        }
        or_chk = 0;
    }
    cout<<ap_sum<<endl<<or_sum<<endl;
    
    return 0;
}