#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         string s;
         int l;
         cin>>l;
         cin>>s;
         int c=0;
         for(int j=0;j<l;j++)
         {
             if(s[j]=='1')
             {
             	c+=1;
			 }
         }
         c=c*(c-1);
         c=c/2;
         cout<<c<<endl;
     }
	return 0;
}
