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
	    int a[n-1];
	    long long int s=0;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        s=s+a[i];
	    }
	    long long int sa=n*(n+1);
	    sa=sa/2;
	    cout<<sa-s<<endl;
	}
	return 0;
}
