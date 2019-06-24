void MyStack :: push(int x)
{
  arr[++top]=x;  
}
int MyStack :: pop()
{
    if(top==-1)
    return -1;
    else
    {
        int r=arr[top];
        top-=1;
        return r;
    }
}
