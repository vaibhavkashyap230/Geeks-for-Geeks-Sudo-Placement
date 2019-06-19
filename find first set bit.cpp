#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n;
	    cin>>n;
	    string s=bitset<17>(n).to_string();
	    for(int i=16;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	        cout<<16-i+1<<endl;
	        break;
	        }
	        if(i==0)
	        {
	            cout<<'0'<<endl;
	        }
	    }
	}
	return 0;
}
