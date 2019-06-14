#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    long long int n;
	    cin>>n;
	    long long int vc=n;
	    int c=1;
	    while(vc/10>0)
	    {
	        c+=1;
	        vc=vc/10;
	    }
	    vc=n;
	    long long int nn=0;
	    while(c)
	    {
	        nn=nn+((vc%10)*pow(10,c-1));
	        vc=vc/10;
	        c-=1;
	    }
	    cout<<nn<<endl;
	}
	return 0;
}
