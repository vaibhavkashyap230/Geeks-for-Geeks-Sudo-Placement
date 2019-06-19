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
	    int n,m;
	    cin>>m>>n;
	    string s1=bitset<10>(m).to_string();
	    string s2=bitset<10>(n).to_string();
	    for(int i=9;i>=0;i--)
	    {
	        if(s1[i]!=s2[i])
	        {
	            cout<<10-i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
