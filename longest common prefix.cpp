#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    for(int i=s1.length()-1;i>0;i--)
	    {
	        string ss=s1.substr(0,i);
	        int d=s2.find(ss);
	        if(d>=0)
	        {
	            cout<<d<<" "<<ss<<endl;
	            break;
	        }
	        if(i==1)
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
