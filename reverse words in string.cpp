#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int e=0;e<t;e++)
	{
	    string s;
	    cin>>s;
	    int sr=0,en=0;
	    stack <string> st;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='.')
	        {
	            string ss=s.substr(sr,en-sr);
	            st.push(ss);
	            sr=i+1;
	            en=i+1;
	        }
	        else
	        {
	            en+=1;
	        }
	    }
	    string ss=s.substr(sr,en-sr);
	    st.push(ss);
	    while(!st.empty())
	    {
	        cout<<st.top();
	        st.pop();
	        if(st.size()>=1)
	        cout<<".";
	    }
	    cout<<endl;
	}
	return 0;
}
