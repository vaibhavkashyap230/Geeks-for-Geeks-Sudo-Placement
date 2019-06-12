#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int e=0;e<t;e++)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int lcm=a*b;
	    long long int d=max(a,b)-min(a,b);
	    while(d)
	    {
	        b=min(a,b);
	        a=d;
	        d=max(a,b)-min(a,b);
	    }
	    long long int hcf=a;
	    lcm=lcm/hcf;
	    cout<<lcm<<" "<<hcf<<endl;
	}
	return 0;
}
