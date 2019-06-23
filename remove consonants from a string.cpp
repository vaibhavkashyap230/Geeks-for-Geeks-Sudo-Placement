#include<stdio.h>
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	for(int x=0;x<t;x++)
	{
	    string s;
	    getline(cin,s);
	    int v=0;
	    for(int i=0;i<s.length();i++)
	    {
	        s[i]=(int)s[i];
	        if(s[i]>64 && s[i]<91)
	        {
	            if(s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85)
	            {
	                s[i]=(char)s[i];
	                cout<<s[i];
	                v+=1;
	            }
	        }
	        else if(s[i]>96 && s[i]<123)
	        {
	            if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
	            {
	                s[i]=(char)s[i];
	                cout<<s[i];
	                v+=1;
	            }
	        }
	        else
	        {
	            s[i]=(char)s[i];
	            cout<<s[i];
	        }
	    }
	    if(v==0)
	    cout<<"No Vowel";
	    cout<<endl;
	}
	return 0;
}
