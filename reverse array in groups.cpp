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
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;)
	    {
	        int s=i;
	        int e=min(n-1,i+k-1);
	        for(int j=e;j>=s;j--)
	        {
	            cout<<a[j]<<" ";
	        }
	        i=min(n-1,i+k);
	    }
	    cout<<endl;
	}
	return 0;
}
