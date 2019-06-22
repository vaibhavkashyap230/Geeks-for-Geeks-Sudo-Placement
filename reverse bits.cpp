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
	    bitset<32>bt(n);
	    int i=0,j=31;
	    while(i<j)
	    {
	        bool d=bt[i];
	        bt[i]=bt[j];
	        bt[j]=d;
	        i++;
	        j--;
	    }
	    n=bt.to_ullong();
	    cout<<n<<endl;
	}
	return 0;
}
