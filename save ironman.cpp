#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
bool check(string s)
{
    int i=0,j=s.length()-1;
	    while(i<j)
	    {
	        if(s[i]>96 && s[i]<123)
	        s[i]-=32;
	        
	        if(s[j]>96 && s[j]<123)
	        s[j]-=32;
	        
	        if(!( ( s[i]>47 && s[i]<58 )||( s[i]>64 && s[i]<91 ) ) )
	        {
	            i+=1;
	            continue;
	        }
	        
	        if(!( (s[j]>47 && s[j]<58)||(s[j]>64 && s[j]<91) ) )
	        {
	            j-=1;
	            continue;
	        }
	        if(s[i]!=s[j])
	        return 0;
	        
	        i+=1;
	        j-=1;
	    }
	    return 1;
}
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    if(check(s))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
