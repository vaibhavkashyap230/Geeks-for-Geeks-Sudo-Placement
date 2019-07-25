#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool flag=0;
	    vector<int>a(n);
	    vector<int>b(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	        if(i>0)
	        {
	            if(a[i]==a[i-1])
	            flag=1;
	        }
	    }
	    if(flag)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    sort(b.begin(),b.end());
	    if(a==b)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
