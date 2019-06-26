#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
void reduce(string &s,int l)
{
	for(int i=0;i<s.length();i++)
	{
	    int c=0;
	    for(int j=i+1;j<s.length();j++)
	    {
	        if(s[i]!=s[j])
	        break;
	        else
	        c+=1;
	    }
	    if(c>0)
		{
		    s.erase(i,c+1);
		    i-=1;
		}
	}
	if(l>s.length())
	reduce(s,s.length());
	else
	cout<<s<<endl;
}
int main()
{
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	string s;
	cin>>s;
	reduce(s,s.length());
	}
	return(0);
}
