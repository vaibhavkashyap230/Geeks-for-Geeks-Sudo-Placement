int findExtra(int a[],int b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        return i;
        if(i==n-2)
        return n-1;
    }
}
