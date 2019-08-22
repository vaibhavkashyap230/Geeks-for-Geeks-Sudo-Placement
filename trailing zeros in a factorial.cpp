#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int tot=0;
	    while(n)
	    {
	        tot+=n/5;
	        n=n/5;
	    }
	    cout<<tot<<endl;
	}
	return 0;
}
