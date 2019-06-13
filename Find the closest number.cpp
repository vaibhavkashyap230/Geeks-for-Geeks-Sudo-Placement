#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int r=a[0];
	    for(int i=1;i<n;i++)
	    {
	        if(fabs(a[i]-k)<=fabs(r-k))
	        {
	            if(a[i]>r)
	            {r=a[i];}
	        }
	    }
	    cout<<r<<endl;
	}
	return 0;
}
