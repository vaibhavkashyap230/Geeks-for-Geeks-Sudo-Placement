#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int x,y;
        cin>>x>>y;
        float a=log(y)/log(x);
        int check=(int)a;
        if(a==check)
        {cout<<"1"<<endl;}
        else
        {cout<<"0"<<endl;}
    }
	return 0;
}
