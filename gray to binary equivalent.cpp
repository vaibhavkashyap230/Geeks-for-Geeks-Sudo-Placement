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
	    unsigned long long int n;
	    cin>>n;
	    bitset<30>bt(n);
	    for(int i=28;i>=0;i--)
	    {
	        bt[i]=bt[i+1]^bt[i];
	    }
	    n=bt.to_ullong();
	    cout<<n<<endl;
	}
	return 0;
}
