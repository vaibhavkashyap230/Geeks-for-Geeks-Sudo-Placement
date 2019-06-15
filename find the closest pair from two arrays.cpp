#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    int k;
	    cin>>k;
	    sort(a,a+n);
	    sort(b,b+m);
	    int la=0,lb=0;
	    int min=fabs(k-(a[0]+b[0]));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if( min > fabs( k- ( a[i]+b[j] ) ) )
	            {
	                la=i;
	                lb=j;
	                min=fabs(k-(a[i]+b[j]));
	            }
	        }
	    }
	    cout<<a[la]<<" "<<b[lb]<<endl;
	}
	return 0;
}
