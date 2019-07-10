#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int l,q;
	    cin>>l>>q;
	    string s;
	    cin>>s;
	    int p=l;
	    for(int i=0;i<q;i++)
	    {
	        int ty;
	        cin>>ty;
	        if(ty==2)
	        {
	            int pl;
	            cin>>pl;
	            int d=p+pl;
	            d=d%l;
	            cout<<s[d]<<endl;
	        }
	        else
	        {
	            int r;
	            cin>>r;
	            r=r%l;
	            p-=r;
	            if(p<0)
	            p+=l;
	        }
	    }
	}
	return 0;
}
