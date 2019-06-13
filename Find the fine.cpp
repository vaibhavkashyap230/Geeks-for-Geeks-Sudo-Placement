#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n,d;
	    cin>>n>>d;
	    int c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>c[i];
	    }
	    int p[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    int check=d%2;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        if(c[i]%2!=check)
	        {
	            f=f+p[i];
	        }
	    }
	    cout<<f<<endl;
	}
	return 0;
}
