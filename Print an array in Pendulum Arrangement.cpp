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
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int f[n];
	    f[(int)n/2]=a[0];
	    int l=(int)n/2;
	    int r=(int)n/2;
	    if(n%2==0)
	    {
	        f[(n-1)/2]=a[0];
	        l=(n-1)/2;
	        r=(n-1)/2;
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(i%2!=0)
	        {
	            f[++r]=a[i];
	        }
	        else
	        {
	            f[--l]=a[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<f[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
