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
	    int k;
	    cin>>k;
	    int l=n;
	    for(int i=0;i<n;)
	    {
	        if(a[i]==k)
	        {
	            l=i;
	            cout<<i<<" ";
	            break;
	        }
	        if(i==n-1)
	        {
	            cout<<"-1"<<endl;
	        }
	        i+=1;
	    }
	    for(int i=l;i<n;i++)
	    {
	        if(a[i]!=k)
	        {
	            cout<<i-1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
