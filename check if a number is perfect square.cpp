#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    if(sqrt(n)==floor(sqrt(n)))
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
