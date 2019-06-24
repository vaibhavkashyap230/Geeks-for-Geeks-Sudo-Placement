void push(int a)
{
    s.push(a);
}
bool isFull(int n)
{
    if(s.size()==n)
    return 1;
    else
    return 0;
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
    int r=s.top();
    s.pop();
    return r;
}
int getMin()
{
    int min=s.top();
    while(!s.empty())
    {
        if(s.top()<min)
        min=s.top();
        s.pop();
    }
    return min;
}
