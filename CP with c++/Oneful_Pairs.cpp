#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	int pair = a+b+(a*b);
	if(pair==111)
	{
	    cout<<"Yes"<<endl;
	}
	else
	{
	    cout<<"No"<<endl;
	}
	return 0;
}
