#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int e=0;e<t;e++)
	{
	    string s;
	    cin>>s;
	    int k,n;
	    cin>>k;
	    cin>>n;
	    char c;
	    cin>>c;
	    int co=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==c)
	        {
	            co+=1;
	        }
	    }
	    int ci=n/s.length();
	    int f=ci*co;
	    int r=n%s.length();
	    co=0;
	    for(int i=0;i<r;i++)
	    {
	        if(s[i]==c)
	        {
	            co+=1;
	        }
	    }
	    f=f+co;
	    cout<<f<<endl;
	}
	return 0;
}
