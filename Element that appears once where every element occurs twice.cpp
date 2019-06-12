#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int e=0;e<t;e++)
	{
	    int l;
	    cin>>l;
	    int a[l];
	    for(int i=0;i<l;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+l);
	    for(int i=0;i<l;)
	    {
	        if(a[i]!=a[i+1])
	        {
	         cout<<a[i]<<endl;
	         break;
	        }
	        i+=2;
	    }
	}
	return 0;
}
