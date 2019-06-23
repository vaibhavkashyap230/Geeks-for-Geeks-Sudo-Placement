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
	    bitset<8>bt(n);
	    for(int i=0;i<8;)
	    {
	        bool d=bt[i];
	        bt[i]=bt[i+1];
	        bt[i+1]=d;
	        i+=2;
	    }
	    cout<<bt.to_ulong()<<endl;
	}
	return 0;
}
