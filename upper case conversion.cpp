#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	if(s[0]>96 && s[0]<123)
	s[0]=s[0]-32;
	for(int i=1;i<s.length();i++)
	{
	    if(s[i-1]==32 && s[i]>96 && s[i]<123)
	    s[i]=s[i]-32;
	}
	cout<<s<<endl;
	}
	return 0;
	}
