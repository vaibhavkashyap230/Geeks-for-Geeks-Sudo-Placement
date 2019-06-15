#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n,k;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==k)
	        {
	            cout<<i<<endl;
	            break;
	        }
	        if(i==n-1)
	        {
	            cout<<"-1"<<endl;
	        }
	    }
	}
	return 0;
}
