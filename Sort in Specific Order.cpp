#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
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
         int co=0,ce=0;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             if(a[i]%2==0)
             {
                 ce+=1;
             }
             else
             {
                 co+=1;
             }
         }
         int o[co];
         int e[ce];
         int oc=0,ec=0;
         for(int i=0;i<n;i++)
         {
            if(a[i]%2==0)
            e[ec++]=a[i];
            else
            o[oc++]=a[i];
         }
         sort(e,e+ce);
         sort(o,o+co,greater<int>());
         for(int i=0;i<co;i++)
         {
            cout<<o[i]<<" ";
         }
         for(int i=0;i<ce;i++)
         {
             cout<<e[i]<<" ";
         }
         cout<<endl;
     }
	return 0;
}
