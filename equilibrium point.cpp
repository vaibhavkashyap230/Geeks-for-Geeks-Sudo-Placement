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
	    int st=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        st=st+a[i];
	    }
	    int sl=0;
	    st=st-a[0];
	    if(st==0)
	    {
	        cout<<'1'<<endl;
	        continue;
	    }
	    for(int i=1;i<n;i++)
	    {
	        sl=sl+a[i-1];
	        st=st-a[i];
	        if(sl==st)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	        if(i==n-1)
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
