#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    string a,b;
	    cin>>a>>b;
	    string bn=b;
	    //ani-cloclwise rotation
	    int d=bn[bn.length()-1];
	    for(int i=bn.length()-1;i>=1;i--)
	    {
	        bn[i]=bn[i-1];
	    }
	    bn[0]=d;
	    d=bn[bn.length()-1];
	    for(int i=bn.length()-1;i>=1;i--)
	    {
	        bn[i]=bn[i-1];
	    }
	    bn[0]=d;
	    if(a==bn)
	    {
	    cout<<"1"<<endl;
	    continue;
	    }
	    //clockwise rotation
	    bn=b;
	    d=bn[0];
	    for(int i=0;i<bn.length()-1;i++)
	    {
	        bn[i]=bn[i+1];
	    }
	    bn[bn.length()-1]=d;
	    d=bn[0];
	    for(int i=0;i<bn.length()-1;i++)
	    {
	        bn[i]=bn[i+1];
	    }
	    bn[bn.length()-1]=d;
	    if(bn==a)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
