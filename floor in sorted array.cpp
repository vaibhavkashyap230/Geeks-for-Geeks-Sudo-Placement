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
	    int i=1;
	    int max=0;
	    if(a[0]>k)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    while(a[i]<=k)
	    {
	        if(a[i]>a[max])
	        {
	            max=i;
	        }
	        i+=1;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
