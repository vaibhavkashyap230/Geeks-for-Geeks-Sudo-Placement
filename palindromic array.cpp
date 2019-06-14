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
	    int i=0;
	    int j=n-1;
	    int c=0;
	    while(i<j)
	    {
	        if(a[i]==a[j])
	        {
	            i+=1;
	            j-=1;
	        }
	        else if(a[i]>a[j])
	        {
	            a[j-1]=a[j-1]+a[j];
	            j-=1;
	            c+=1;
	        }
	        else if(a[i]<a[j])
	        {
	            a[i+1]=a[i]+a[i+1];
	            i+=1;
	            c+=1;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
