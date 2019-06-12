#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int e=0;e<t;e++)
	{
	    int n,d;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>d;
	    for(int i=d;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    for(int i=0;i<d;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
