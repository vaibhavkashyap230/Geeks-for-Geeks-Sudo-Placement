#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    stack<int>st;
	    for(int i=n-1;i>=0;i--)
	    {
	        int c=0;
	        for(int j=i;j>=0;j--)
	        {
	            if(a[j]>a[i])
	            break;
	            else
	            c+=1;
	        }
	        st.push(c);
	    }
	    while(!st.empty())
	    {
	        cout<<st.top()<<" ";
	        st.pop();
	    }
	    cout<<endl;
	}
	return 0;
}
