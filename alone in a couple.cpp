#include<stdio.h>
#include<iostream>
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
	    int r=0;
	    for(int i=0;i<n;i++)
	    {
	        r=r^a[i];
	    }
	    cout<<r<<endl;
	}
	return 0;
}
