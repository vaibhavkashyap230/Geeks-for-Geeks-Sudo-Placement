#include<stdio.h>
#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    long long int n;
	    cin>>n;
	    string s=bitset<60>(n).to_string();
	    int c=0;
	    for(int i=0;i<60;i++)
	    {
	        if(s[i]=='1')
	        c=c+1;
	    }
	    if(c==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
