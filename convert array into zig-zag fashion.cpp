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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(n>=2)
	    {
	    for(int i=1;i<n;i++)
	    {
	        if(i%2)
	        {
	            if(a[i]<=a[i-1])
	            swap(a[i],a[i-1]);
	        }
	        else
	        {
	            if(a[i]>a[i-1])
	            swap(a[i],a[i-1]);
	        }
	    }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
