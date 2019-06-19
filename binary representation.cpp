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
	    string s=bitset<14>(n).to_string();
	    cout<<s<<endl;
	}
	return 0;
}
