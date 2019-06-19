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
	    int n,k;
	    cin>>n>>k;
	    string s=bitset<30>(n).to_string();
	    if(s[s.length()-k-1]=='1')
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
