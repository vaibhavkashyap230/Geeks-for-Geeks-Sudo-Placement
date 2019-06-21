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
	    int n,l,r;
	    cin>>n>>l>>r;
	    bitset<10>bt(n);
	    for(int i=l-1;i<r;i++)
	    {
	        bt[i]=~bt[i];
	    }
	    unsigned long int f=bt.to_ulong();
	    cout<<f<<endl;
	}
	return 0;
}
