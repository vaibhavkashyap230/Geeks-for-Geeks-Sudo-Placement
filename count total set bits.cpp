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
	    int c=0;
	    for(int i=1;i<=n;i++)
	    {
	        string s=bitset<10>(i).to_string();
	        for(int j=0;j<10;j++)
	        {
	            if(s[j]=='1')
	            c+=1;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
