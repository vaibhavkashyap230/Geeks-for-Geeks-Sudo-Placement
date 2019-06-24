stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    int n=sizeOfStack/2;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=s.top();
        s.pop();
    }
    s.pop();
    for(int i=n-1;i>=0;i--)
    {
        s.push(a[i]);
    }
    return s;
}
