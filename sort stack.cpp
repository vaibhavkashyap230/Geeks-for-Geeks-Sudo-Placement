#include<bits/stdc++.h>
void SortedStack :: sort()
{
    int n=s.size();
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=s.top();
        s.pop();
    }
    std::sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        s.push(a[i]);
    }
}
