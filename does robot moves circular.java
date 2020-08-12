// https://practice.geeksforgeeks.org/problems/does-robot-moves-circular/0

import java.util.*;

class pair
{
	int x,y;
	public pair(int a,int b)
	{
		this.x = a;
		this.y = b;
	}
}

class GFG
{
    
  private static pair move(int dir,pair cor)
	{
		if(dir==1)
			return new pair(cor.x,cor.y+1);
		
		if(dir==2)
			return new pair(cor.x-1,cor.y);
		
		if(dir==3)
			return new pair(cor.x,cor.y-1);

		else
			return new pair(cor.x+1,cor.y);
	}
    
  private static int rotate(int cur,char dir)
	{
		if(cur==1)
		{
			if(dir=='L')
				return 2;
			return 4;
		}
		if(cur==2)
		{
			if(dir=='L')
				return 3;
			return 1;
		}
		if(cur==3)
		{
			if(dir=='L')
				return 4;
			return 2;
		}
		if(dir=='L')
			return 1;
		return 3;
	}
    
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while(test-->0)
		{
			String s = sc.next();
			int dir = 1;
			pair cor = new pair(0,0);
			for(int i=0;i<s.length();i++)
			{
				if(s.charAt(i)=='G')
				{
					cor = move(dir,cor);
				}
				else
				{
				    dir = rotate(dir,s.charAt(i));
				}
			}
			if(cor.x==0 && cor.y==0)
				System.out.println("Circular");
			else
				System.out.println("Not Circular");
		}
		sc.close();
	}
}
