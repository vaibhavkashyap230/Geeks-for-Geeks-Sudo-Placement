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
	    bitset<30>f;
	    f[29]=bt[29];
	    for(int i=28;i>=0;i--)
	    {
	        f[i]=bt[i]^bt[i-1];
	    }
	    n=f.to_ullong();
	    cout<<n/2<<endl;
	}
	return 0;
}
