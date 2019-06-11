#include<stdio.h>
#include<string>
#include<iostream>
#include<stack>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         string s;
         cin>>s;
         int l=s.length();
         stack <char> sk;
         for(int j=0;j<l;j++)
         {
             if(s[j]==97 || s[j]==101 || s[j]==105 || s[j]==111 || s[j]==117)
             sk.push(s[j]);
         }
         for(int j=0;j<l;j++)
         {
             if(s[j]==97 || s[j]==101 || s[j]==105 || s[j]==111 || s[j]==117)
             {s[j]=sk.top();
              sk.pop();
             }
         }
         cout<<s<<endl;
     }
	return 0;
}
