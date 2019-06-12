#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]<a[i])
            cout<<a[i+1]<<" ";
            else
            cout<<"-1 ";
        }
        cout<<"-1"<<endl;
    }
	return 0;
}
