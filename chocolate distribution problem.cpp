#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int s;
	    cin>>s;
	    sort(a,a+n);
	    int min=a[s-1]-a[0];
	    for(int i=0;i<=n-s;i++)
	    {
	        int d=a[i+s-1]-a[i];
	        if(d<min)
	        min=d;
	    }
	    cout<<min<<endl;
	}
	return 0;
}
