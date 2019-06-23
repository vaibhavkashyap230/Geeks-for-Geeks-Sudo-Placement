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
        int max=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=max)
            {
                st.push(a[i]);
                max=a[i];
            }
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
    return(0);
}
