#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    cin>>l;
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool c[l+1];
	    for(int i=1;i<l+1;i++)
	    {
	        c[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(c[a[i]]==0){
	        for(int j=a[i];j<=l;)
	        {
	            c[j]=1;
	            j+=a[i];
	        }}
	    }
	    int r=0;
	    for(int i=1;i<l+1;i++)
	    {
	        if(c[i]==0)
	        {
	            r+=1;
	        }
	    }
	    cout<<r<<endl;
	}
	return 0;
}
