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
	    string s=bitset<10>(n).to_string();
	    for(int i=0;i<9;i++)
	    {
	        if(s[i]=='1' && s[i+1]=='1')
	        {
	            cout<<0<<endl;
	            break;
	        }
	        if(i==8)
	        cout<<1<<endl;
	    }
	}
	return 0;
}
