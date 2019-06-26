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
	    string s;
	    cin>>s;
	    for(int i=s.length()-1;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            cout<<i<<endl;
	            break;
	        }
	        if(i==0)
	        {
	            cout<<-1<<endl;
	        }
	    }
	}
	return 0;
}
